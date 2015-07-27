//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: findinfiles_dlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "findinfiles_dlg.h"


// Declare the bitmap loading function
extern void wxCABC4InitBitmapResources();

static bool bBitmapLoaded = false;


FindInFilesDialogBase::FindInFilesDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCABC4InitBitmapResources();
        bBitmapLoaded = true;
    }
    // Set icon(s) to the application/dialog
    wxIconBundle app_icons;
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("find-in-files"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    SetIcons( app_icons );

    
    wxBoxSizer* boxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    this->SetSizer(boxSizer7);
    
    m_panelMainPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    boxSizer7->Add(m_panelMainPanel, 1, wxEXPAND, 5);
    
    wxBoxSizer* boxSizer95 = new wxBoxSizer(wxVERTICAL);
    m_panelMainPanel->SetSizer(boxSizer95);
    
    wxBoxSizer* boxSizer50 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer95->Add(boxSizer50, 1, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* fgSizer41 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer41->SetFlexibleDirection( wxBOTH );
    fgSizer41->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer41->AddGrowableCol(1);
    fgSizer41->AddGrowableRow(1);
    
    boxSizer50->Add(fgSizer41, 1, wxALL|wxEXPAND, 5);
    
    m_staticText1 = new wxStaticText(m_panelMainPanel, wxID_ANY, _("Find What :"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer41->Add(m_staticText1, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_findStringArr;
    m_findString = new wxComboBox(m_panelMainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), m_findStringArr, 0);
    m_findString->SetToolTip(_("String to search"));
    m_findString->SetFocus();
    #if wxVERSION_NUMBER >= 3000
    m_findString->SetHint(_("Type a string to search..."));
    #endif
    
    fgSizer41->Add(m_findString, 0, wxALL|wxEXPAND, 5);
    
    m_staticText2 = new wxStaticText(m_panelMainPanel, wxID_ANY, _("Look in :"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer41->Add(m_staticText2, 0, wxALL|wxALIGN_RIGHT|wxALIGN_TOP, 5);
    
    wxBoxSizer* bSizer9 = new wxBoxSizer(wxHORIZONTAL);
    
    fgSizer41->Add(bSizer9, 0, wxEXPAND, 5);
    
    wxArrayString m_listPathsArr;
    m_listPaths = new wxListBox(m_panelMainPanel, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_listPathsArr, wxLB_SORT|wxLB_MULTIPLE);
    
    bSizer9->Add(m_listPaths, 1, wxLEFT|wxTOP|wxBOTTOM|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer1 = new wxBoxSizer(wxVERTICAL);
    
    bSizer9->Add(boxSizer1, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    m_btnAddPath = new wxButton(m_panelMainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    #if wxVERSION_NUMBER >= 2904
    m_btnAddPath->SetBitmap(wxArtProvider::GetBitmap(wxART_PLUS, wxART_TOOLBAR, wxSize(16, 16)), wxLEFT);
    m_btnAddPath->SetBitmapMargins(2,2);
    #endif
    m_btnAddPath->SetToolTip(_("Add search path"));
    
    boxSizer1->Add(m_btnAddPath, 0, wxTOP|wxBOTTOM|wxEXPAND, 5);
    
    m_btnClearSelectedPath = new wxButton(m_panelMainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    #if wxVERSION_NUMBER >= 2904
    m_btnClearSelectedPath->SetBitmap(wxArtProvider::GetBitmap(wxART_DELETE, wxART_TOOLBAR, wxSize(16, 16)), wxLEFT);
    m_btnClearSelectedPath->SetBitmapMargins(2,2);
    #endif
    m_btnClearSelectedPath->SetToolTip(_("Remove the selected path"));
    
    boxSizer1->Add(m_btnClearSelectedPath, 0, wxTOP|wxEXPAND, 5);
    
    m_staticText3 = new wxStaticText(m_panelMainPanel, wxID_ANY, _("File Mask:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer41->Add(m_staticText3, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_fileTypesArr;
    m_fileTypesArr.Add(wxT("*.c;*.cpp;*.cxx;*.cc;*.h;*.hpp;*.inc;*.mm;*.m;*.xrc"));
    m_fileTypes = new wxComboBox(m_panelMainPanel, wxID_ANY, wxT("*.c;*.cpp;*.cxx;*.cc;*.h;*.hpp;*.inc;*.mm;*.m;*.xrc"), wxDefaultPosition, wxSize(-1, -1), m_fileTypesArr, 0);
    m_fileTypes->SetToolTip(_("Search these file types"));
    #if wxVERSION_NUMBER >= 3000
    m_fileTypes->SetHint(wxT(""));
    #endif
    m_fileTypes->SetSelection(0);
    
    fgSizer41->Add(m_fileTypes, 0, wxALL|wxEXPAND, 5);
    
    m_staticText5 = new wxStaticText(m_panelMainPanel, wxID_ANY, _("Files Encoding:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer41->Add(m_staticText5, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceEncodingArr;
    m_choiceEncoding = new wxChoice(m_panelMainPanel, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_choiceEncodingArr, 0);
    m_choiceEncoding->SetToolTip(_("Use this file encoding when scanning files for matches"));
    
    fgSizer41->Add(m_choiceEncoding, 1, wxALL|wxEXPAND, 5);
    
    m_staticText97 = new wxStaticText(m_panelMainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    fgSizer41->Add(m_staticText97, 0, wxALL|wxALIGN_RIGHT, 5);
    
    wxStaticBoxSizer* staticBoxSizer98 = new wxStaticBoxSizer( new wxStaticBox(m_panelMainPanel, wxID_ANY, _("Search Options:")), wxVERTICAL);
    
    fgSizer41->Add(staticBoxSizer98, 0, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* fgSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
    fgSizer3->SetFlexibleDirection( wxBOTH );
    fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    staticBoxSizer98->Add(fgSizer3, 0, wxEXPAND, 5);
    
    m_matchCase = new wxCheckBox(m_panelMainPanel, wxID_ANY, _("&Match case"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_matchCase->SetValue(false);
    m_matchCase->SetToolTip(_("Toggle case sensitive search"));
    
    fgSizer3->Add(m_matchCase, 0, wxALL|wxEXPAND, 5);
    
    m_matchWholeWord = new wxCheckBox(m_panelMainPanel, wxID_ANY, _("Match &whole word"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_matchWholeWord->SetValue(false);
    m_matchWholeWord->SetToolTip(_("Toggle whole word search"));
    
    fgSizer3->Add(m_matchWholeWord, 0, wxALL|wxEXPAND, 5);
    
    m_regualrExpression = new wxCheckBox(m_panelMainPanel, wxID_ANY, _("Regular &expression"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_regualrExpression->SetValue(false);
    m_regualrExpression->SetToolTip(_("The 'Find What' field is a regular expression"));
    
    fgSizer3->Add(m_regualrExpression, 0, wxALL|wxEXPAND, 5);
    
    m_checkBoxSaveFilesBeforeSearching = new wxCheckBox(m_panelMainPanel, wxID_ANY, _("&Save files before search"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxSaveFilesBeforeSearching->SetValue(false);
    m_checkBoxSaveFilesBeforeSearching->SetToolTip(_("Save any modified files before search starts"));
    
    fgSizer3->Add(m_checkBoxSaveFilesBeforeSearching, 0, wxALL|wxEXPAND, 5);
    
    m_checkBoxSeparateTab = new wxCheckBox(m_panelMainPanel, wxID_ANY, _("Use new tab per search"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxSeparateTab->SetValue(true);
    
    fgSizer3->Add(m_checkBoxSeparateTab, 0, wxALL, 5);
    
    wxBoxSizer* bSizer2 = new wxBoxSizer(wxVERTICAL);
    
    boxSizer50->Add(bSizer2, 0, wxALL, 5);
    
    m_find = new wxButton(m_panelMainPanel, wxID_FIND, _("&Find"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_find->SetDefault();
    m_find->SetToolTip(_("Begin search"));
    
    bSizer2->Add(m_find, 0, wxALL|wxEXPAND, 5);
    
    m_replaceAll = new wxButton(m_panelMainPanel, wxID_REPLACE, _("&Replace"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_replaceAll->SetToolTip(_("Search for matches and place them in the 'Replace' window as candidates for possible replace operation"));
    
    bSizer2->Add(m_replaceAll, 0, wxALL|wxEXPAND, 5);
    
    m_stop = new wxButton(m_panelMainPanel, wxID_STOP, _("Sto&p"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stop->SetToolTip(_("Stop the current search"));
    
    bSizer2->Add(m_stop, 0, wxALL|wxEXPAND, 5);
    
    m_cancel = new wxButton(m_panelMainPanel, wxID_CANCEL, _("Close"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_cancel->SetToolTip(_("Close this dialog"));
    
    bSizer2->Add(m_cancel, 0, wxALL|wxEXPAND, 5);
    
    SetName(wxT("FindInFilesDialogBase"));
    SetSizeHints(-1,-1);
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
    // Connect events
    m_btnAddPath->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnAddPath), NULL, this);
    m_btnClearSelectedPath->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClearSelectedPath), NULL, this);
    m_btnClearSelectedPath->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnClearSelectedPathUI), NULL, this);
    m_find->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnFind), NULL, this);
    m_find->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnFindWhatUI), NULL, this);
    m_replaceAll->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnReplace), NULL, this);
    m_replaceAll->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnFindWhatUI), NULL, this);
    m_stop->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnStop), NULL, this);
    m_cancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnButtonClose), NULL, this);
    
}

FindInFilesDialogBase::~FindInFilesDialogBase()
{
    m_btnAddPath->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnAddPath), NULL, this);
    m_btnClearSelectedPath->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClearSelectedPath), NULL, this);
    m_btnClearSelectedPath->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnClearSelectedPathUI), NULL, this);
    m_find->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnFind), NULL, this);
    m_find->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnFindWhatUI), NULL, this);
    m_replaceAll->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnReplace), NULL, this);
    m_replaceAll->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnFindWhatUI), NULL, this);
    m_stop->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnStop), NULL, this);
    m_cancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnButtonClose), NULL, this);
    
}
