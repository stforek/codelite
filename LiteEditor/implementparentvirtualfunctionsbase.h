//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: implementparentvirtualfunctionsbase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_LITEEDITOR_IMPLEMENTPARENTVIRTUALFUNCTIONSBASE_BASE_CLASSES_H
#define CODELITE_LITEEDITOR_IMPLEMENTPARENTVIRTUALFUNCTIONSBASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/bannerwindow.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/dataview.h>
#include "functionsmodel.h"
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class ImplementParentVirtualFunctionsBase : public wxDialog
{
protected:
    wxBannerWindow* m_banner4;
    wxStaticText* m_staticText2;
    wxTextCtrl* m_textCtrlImplFile;
    wxDataViewCtrl* m_dataview;
    wxObjectDataPtr<FunctionsModel> m_dataviewModel;

    wxButton* m_button10;
    wxButton* m_button12;
    wxCheckBox* m_checkBoxFormat;
    wxButton* m_buttonOk;
    wxButton* m_buttonCancel;

protected:
    virtual void OnValueChanged(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnCheckAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnUnCheckAll(wxCommandEvent& event) { event.Skip(); }

public:
    wxBannerWindow* GetBanner4() { return m_banner4; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxTextCtrl* GetTextCtrlImplFile() { return m_textCtrlImplFile; }
    wxDataViewCtrl* GetDataview() { return m_dataview; }
    wxButton* GetButton10() { return m_button10; }
    wxButton* GetButton12() { return m_button12; }
    wxCheckBox* GetCheckBoxFormat() { return m_checkBoxFormat; }
    wxButton* GetButtonOk() { return m_buttonOk; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    ImplementParentVirtualFunctionsBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Implement Parent Virtual Functions"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,400), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~ImplementParentVirtualFunctionsBase();
};

#endif
