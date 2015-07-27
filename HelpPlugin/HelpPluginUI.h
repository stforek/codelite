//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: HelpPluginUI.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_HELPPLUGIN_HELPPLUGINUI_BASE_CLASSES_H
#define CODELITE_HELPPLUGIN_HELPPLUGINUI_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/hyperlink.h>
#include <wx/button.h>
#include <wx/propgrid/manager.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/advprops.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class HelpPluginMessageBaseDlg : public wxDialog
{
protected:
    wxStaticBitmap* m_staticBitmap14;
    wxStaticText* m_staticText;
    wxHyperlinkCtrl* m_hyperLink;
    wxStdDialogButtonSizer* m_stdBtnSizer4;
    wxButton* m_button6;

protected:

public:
    wxStaticBitmap* GetStaticBitmap14() { return m_staticBitmap14; }
    wxStaticText* GetStaticText() { return m_staticText; }
    wxHyperlinkCtrl* GetHyperLink() { return m_hyperLink; }
    HelpPluginMessageBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Help Plugin Error"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~HelpPluginMessageBaseDlg();
};


class HelpPluginSettingsDlgBase : public wxDialog
{
protected:
    wxPropertyGridManager* m_pgMgr34;
    wxPGProperty* m_pgProp36;
    wxPGProperty* m_pgPropCxx;
    wxPGProperty* m_pgPropPHP;
    wxPGProperty* m_pgPropCMake;
    wxPGProperty* m_pgPropHtml;
    wxPGProperty* m_pgPropCSS;
    wxPGProperty* m_pgPropJS;
    wxPGProperty* m_pgPropJava;
    wxStdDialogButtonSizer* m_stdBtnSizer26;
    wxButton* m_button28;
    wxButton* m_button30;

protected:
    virtual void OnDocsetChanged(wxPropertyGridEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }

public:
    wxPropertyGridManager* GetPgMgr34() { return m_pgMgr34; }
    HelpPluginSettingsDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~HelpPluginSettingsDlgBase();
};

#endif
