//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: reconcileproject.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_LITEEDITOR_RECONCILEPROJECT_BASE_CLASSES_H
#define CODELITE_LITEEDITOR_RECONCILEPROJECT_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/bannerwindow.h>
#include <wx/splitter.h>
#include <wx/dataview.h>
#include <wx/bmpbuttn.h>
#include "assignedfilesmodel.h"
#include <wx/button.h>
#include "stalefilesmodel.h"
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/textctrl.h>
#include <wx/listbox.h>
#include <wx/listctrl.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class ReconcileProjectDlgBaseClass : public wxDialog
{
protected:
    wxNotebook* m_notebook214;
    wxPanel* m_panel220;
    wxBannerWindow* m_banner270;
    wxSplitterWindow* m_splitter;
    wxPanel* m_splitterPage1;
    wxDataViewListCtrl* m_dvListCtrl1Unassigned;
    wxBitmapButton* m_bmpButtonAdd;
    wxBitmapButton* m_bmpButtonRemove;
    wxBitmapButton* m_bmpButtonAutoAdd;
    wxPanel* m_splitterPage2;
    wxDataViewCtrl* m_dataviewAssigned;
    wxObjectDataPtr<AssignedFilesModel> m_dataviewAssignedModel;

    wxButton* m_button274;
    wxButton* m_button280;
    wxPanel* m_panel222;
    wxBannerWindow* m_banner272;
    wxDataViewCtrl* m_dataviewStaleFiles;
    wxObjectDataPtr<StaleFilesModel> m_dataviewStaleFilesModel;

    wxButton* m_button266;
    wxButton* m_button282;
    wxButton* m_button258;

protected:
    virtual void OnAddFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddFileUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnUndoSelectedFiles(wxCommandEvent& event) { event.Skip(); }
    virtual void OnUndoSelectedFilesUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnAutoSuggest(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAutoAssignUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnApply(wxCommandEvent& event) { event.Skip(); }
    virtual void OnApplyUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnApplyAllUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnDeleteStaleFiles(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteStaleFilesUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnDeleteAllStaleFilesUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClose(wxCommandEvent& event) { event.Skip(); }

public:
    wxBannerWindow* GetBanner270() { return m_banner270; }
    wxDataViewListCtrl* GetDvListCtrl1Unassigned() { return m_dvListCtrl1Unassigned; }
    wxBitmapButton* GetBmpButtonAdd() { return m_bmpButtonAdd; }
    wxBitmapButton* GetBmpButtonRemove() { return m_bmpButtonRemove; }
    wxBitmapButton* GetBmpButtonAutoAdd() { return m_bmpButtonAutoAdd; }
    wxPanel* GetSplitterPage1() { return m_splitterPage1; }
    wxDataViewCtrl* GetDataviewAssigned() { return m_dataviewAssigned; }
    wxPanel* GetSplitterPage2() { return m_splitterPage2; }
    wxSplitterWindow* GetSplitter() { return m_splitter; }
    wxButton* GetButton274() { return m_button274; }
    wxButton* GetButton280() { return m_button280; }
    wxPanel* GetPanel220() { return m_panel220; }
    wxBannerWindow* GetBanner272() { return m_banner272; }
    wxDataViewCtrl* GetDataviewStaleFiles() { return m_dataviewStaleFiles; }
    wxButton* GetButton266() { return m_button266; }
    wxButton* GetButton282() { return m_button282; }
    wxPanel* GetPanel222() { return m_panel222; }
    wxNotebook* GetNotebook214() { return m_notebook214; }
    wxButton* GetButton258() { return m_button258; }
    ReconcileProjectDlgBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Reconcile Project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~ReconcileProjectDlgBaseClass();
};


class ReconcileProjectFiletypesDlgBaseClass : public wxDialog
{
protected:
    wxStaticText* m_staticText116;
    wxDirPickerCtrl* m_dirPickerToplevel;
    wxStaticText* m_staticText11617;
    wxTextCtrl* m_textExtensions;
    wxStaticText* m_staticText11618216;
    wxListBox* m_listIgnoreFiles;
    wxButton* m_button11921620;
    wxButton* m_button125721;
    wxStaticText* m_staticText11618;
    wxListBox* m_listExclude;
    wxButton* m_button11921;
    wxButton* m_button125;
    wxStaticText* m_staticText116182;
    wxListCtrl* m_listCtrlRegexes;
    wxButton* m_button119216;
    wxButton* m_button1257;
    wxStdDialogButtonSizer* m_stdBtnSizer120;
    wxButton* m_button121;
    wxButton* m_button122;

protected:
    virtual void OnIgnoreFileBrowse(wxCommandEvent& event) { event.Skip(); }
    virtual void OnIgnoreFileRemove(wxCommandEvent& event) { event.Skip(); }
    virtual void OnIgnoreFileRemoveUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnIgnoreBrowse(wxCommandEvent& event) { event.Skip(); }
    virtual void OnIgnoreRemove(wxCommandEvent& event) { event.Skip(); }
    virtual void OnIgnoreRemoveUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnAddRegex(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveRegex(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveRegexUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText116() { return m_staticText116; }
    wxDirPickerCtrl* GetDirPickerToplevel() { return m_dirPickerToplevel; }
    wxStaticText* GetStaticText11617() { return m_staticText11617; }
    wxTextCtrl* GetTextExtensions() { return m_textExtensions; }
    wxStaticText* GetStaticText11618216() { return m_staticText11618216; }
    wxListBox* GetListIgnoreFiles() { return m_listIgnoreFiles; }
    wxButton* GetButton11921620() { return m_button11921620; }
    wxButton* GetButton125721() { return m_button125721; }
    wxStaticText* GetStaticText11618() { return m_staticText11618; }
    wxListBox* GetListExclude() { return m_listExclude; }
    wxButton* GetButton11921() { return m_button11921; }
    wxButton* GetButton125() { return m_button125; }
    wxStaticText* GetStaticText116182() { return m_staticText116182; }
    wxListCtrl* GetListCtrlRegexes() { return m_listCtrlRegexes; }
    wxButton* GetButton119216() { return m_button119216; }
    wxButton* GetButton1257() { return m_button1257; }
    ReconcileProjectFiletypesDlgBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Select filetypes to reconcile"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~ReconcileProjectFiletypesDlgBaseClass();
};


class ReconcileByRegexDlgBaseClass : public wxDialog
{
protected:
    wxStaticText* m_staticText145;
    wxTextCtrl* m_textCtrlRegex;
    wxStaticText* m_staticText147;
    wxTextCtrl* m_textCtrlVirtualFolder;
    wxBitmapButton* m_bmpButton21010;
    wxStdDialogButtonSizer* m_stdBtnSizer12011;
    wxButton* m_button12112;
    wxButton* m_buttonOK;

protected:
    virtual void OnTextEnter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnVDBrowse(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRegexOKCancelUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText145() { return m_staticText145; }
    wxTextCtrl* GetTextCtrlRegex() { return m_textCtrlRegex; }
    wxStaticText* GetStaticText147() { return m_staticText147; }
    wxTextCtrl* GetTextCtrlVirtualFolder() { return m_textCtrlVirtualFolder; }
    wxBitmapButton* GetBmpButton21010() { return m_bmpButton21010; }
    ReconcileByRegexDlgBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Allocate by regex"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~ReconcileByRegexDlgBaseClass();
};

#endif
