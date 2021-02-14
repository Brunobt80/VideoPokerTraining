//
// Created by bbt on 13/02/2021.
//

#ifndef VIDEOPOKERTRAINING_MAINWINDOW_HPP
#define VIDEOPOKERTRAINING_MAINWINDOW_HPP

// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif


#include "wx/frame.h"
#include "wx/tglbtn.h"
#include <wx/sizer.h>

////@begin control identifiers
#define ID_TOGGLEBUTTON0 10001
#define ID_TOGGLEBUTTON1 10002
#define ID_TOGGLEBUTTON2 10003
#define ID_TOGGLEBUTTON3 10004
#define ID_TOGGLEBUTTON4 10005
////@end control identifiers


class JacksOrBetter: public wxFrame
{

public:
	JacksOrBetter(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
	wxDECLARE_EVENT_TABLE();

};

#endif //VIDEOPOKERTRAINING_MAINWINDOW_HPP
