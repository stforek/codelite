//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: CodeLiteUpgradeFrame.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "CodeLiteUpgradeFrameBase.h"


// Declare the bitmap loading function
extern void wxCrafterIPOGcqInitBitmapResources();

static bool bBitmapLoaded = false;


clInitializeDialogBase::clInitializeDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterIPOGcqInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer26 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer26);
    
    m_panel4 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(500,-1), wxTAB_TRAVERSAL);
    
    boxSizer26->Add(m_panel4, 1, wxEXPAND, 5);
    
    wxBoxSizer* boxSizer6 = new wxBoxSizer(wxVERTICAL);
    m_panel4->SetSizer(boxSizer6);
    
    m_banner = new wxBannerWindow(m_panel4, wxID_ANY, wxTOP, wxDefaultPosition, wxSize(-1,-1), wxBORDER_THEME);
    m_banner->SetBitmap(wxNullBitmap);
    m_banner->SetText(_("Initializing CodeLite"), wxT(""));
    m_banner->SetGradient(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION), wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    m_banner->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
    
    boxSizer6->Add(m_banner, 0, wxALL|wxEXPAND, 5);
    
    m_gauge = new wxGauge(m_panel4, wxID_ANY, 100, wxDefaultPosition, wxSize(-1,-1), wxGA_HORIZONTAL);
    m_gauge->SetValue(10);
    
    boxSizer6->Add(m_gauge, 0, wxALL|wxEXPAND, 5);
    
    boxSizer6->Add(0, 0, 1, wxALL, 5);
    
    wxBoxSizer* boxSizer20 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer6->Add(boxSizer20, 0, wxALL|wxALIGN_RIGHT, 5);
    m_panel4->SetMinSize(wxSize(500,-1));
    
    SetName(wxT("clInitializeDialogBase"));
    SetSizeHints(500,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    CentreOnParent(wxBOTH);
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
}

clInitializeDialogBase::~clInitializeDialogBase()
{
}
