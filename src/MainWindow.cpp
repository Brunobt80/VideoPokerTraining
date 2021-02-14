//
// Created by bbt on 13/02/2021.
//

#include "../include/MainWindow.hpp"

JacksOrBetter::JacksOrBetter(const wxString& title, const wxPoint& pos, const wxSize& size)
	: wxFrame(nullptr, wxID_ANY, title, pos, size)
{
	JacksOrBetter* itemFrame1 = this;

	wxBoxSizer* itemBoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	itemFrame1->SetSizer(itemBoxSizer1);

	itemBoxSizer1->Add(5, 5, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

	wxToggleButton* itemToggleButton0 = new wxToggleButton(itemFrame1, ID_TOGGLEBUTTON0, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemToggleButton0->SetValue(false);
	itemBoxSizer1->Add(itemToggleButton0, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

	wxToggleButton* itemToggleButton1 = new wxToggleButton(itemFrame1, ID_TOGGLEBUTTON1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemToggleButton1->SetValue(false);
	itemBoxSizer1->Add(itemToggleButton1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

	wxToggleButton* itemToggleButton2 = new wxToggleButton(itemFrame1, ID_TOGGLEBUTTON2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemToggleButton2->SetValue(false);
	itemBoxSizer1->Add(itemToggleButton2, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

	wxToggleButton* itemToggleButton3 = new wxToggleButton(itemFrame1, ID_TOGGLEBUTTON3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemToggleButton3->SetValue(false);
	itemBoxSizer1->Add(itemToggleButton3, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

	wxToggleButton* itemToggleButton4 = new wxToggleButton(itemFrame1, ID_TOGGLEBUTTON4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	itemToggleButton4->SetValue(false);
	itemBoxSizer1->Add(itemToggleButton4, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

	itemBoxSizer1->Add(5, 5, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);
}

wxBEGIN_EVENT_TABLE(JacksOrBetter, wxFrame)

wxEND_EVENT_TABLE()