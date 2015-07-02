#include "NodeJSWorkspaceUserConfiguration.h"
#include <globals.h>
#include <json_node.h>

NodeJSWorkspaceUser::NodeJSWorkspaceUser(const wxString& workspacePath)
    : m_workspacePath(workspacePath)
{
}

NodeJSWorkspaceUser::~NodeJSWorkspaceUser() {}

wxFileName NodeJSWorkspaceUser::GetFileName() const
{
    wxFileName workspaceFile(m_workspacePath);
    wxFileName fn(workspaceFile.GetPath(), workspaceFile.GetFullName() + "." + clGetUserName());
    fn.AppendDir(".codelite");
    if(!fn.FileExists()) {
        fn.Mkdir(wxS_DIR_DEFAULT, wxPATH_MKDIR_FULL);
    }
    return fn;
}

NodeJSWorkspaceUser& NodeJSWorkspaceUser::Load()
{
    wxFileName fn = GetFileName();
    JSONRoot root(fn);
    JSONElement element = root.toElement();
    m_breakpoints.clear();

    JSONElement bpArr = element.namedObject("m_breakpoints");
    int bpcount = bpArr.arraySize();
    for(int i = 0; i < bpcount; ++i) {
        NodeJSBreakpoint bp;
        bp.FromJSON(bpArr.arrayItem(i));
        m_breakpoints.push_back(bp);
    }
    return *this;
}

NodeJSWorkspaceUser& NodeJSWorkspaceUser::Save()
{
    // Serialize the breakpoints
    JSONRoot root(cJSON_Object);
    JSONElement json = root.toElement();
    JSONElement bpArr = JSONElement::createArray("m_breakpoints");
    json.append(bpArr);

    NodeJSBreakpoint::List_t::const_iterator iter = m_breakpoints.begin();
    for(; iter != m_breakpoints.end(); ++iter) {
        bpArr.arrayAppend(iter->ToJSON());
    }
    root.save(GetFileName());
    return *this;
}
