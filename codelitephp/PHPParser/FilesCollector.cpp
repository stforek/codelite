#include "FilesCollector.h"
#include <wx/tokenzr.h>
#include <wx/filefn.h>
#include <wx/filename.h>

FilesCollector::FilesCollector(const wxString& filespec, wxProgressDialog* progress)
    : m_progress(progress)
{
    m_specArray = ::wxStringTokenize(filespec, ";", wxTOKEN_STRTOK);
}

FilesCollector::~FilesCollector() {}

wxDirTraverseResult FilesCollector::OnDir(const wxString& dirname)
{
    if(m_progress) {
        m_progress->Pulse(wxString::Format("Loading files from folder: %s", dirname));
    }
    wxFileName fn(dirname, FOLDER_MARKER);
    m_filesAndFolders.Add(fn.GetFullPath());
    return wxDIR_CONTINUE;
}

wxDirTraverseResult FilesCollector::OnFile(const wxString& filename)
{
    // add the file to our array
    wxFileName fn(filename);

    for(size_t i = 0; i < m_specArray.GetCount(); i++) {
        if(wxMatchWild(m_specArray.Item(i), fn.GetFullName())) {
            m_filesAndFolders.Add(filename);
            return wxDIR_CONTINUE;
        }
    }
    return wxDIR_CONTINUE;
}
