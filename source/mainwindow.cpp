/************************************************************************************//**
* \file         mainwindow.cpp
* \brief        Application's main window source file.
*
****************************************************************************************/

/****************************************************************************************
* Include files
****************************************************************************************/
#include "mainwindow.h"


/************************************************************************************//**
** \brief     Constructor of the application's main window.
** \param     title Window title.
** \param     width Width of the window in pixels.
** \param     height Height of the window in pixels.
**
****************************************************************************************/
MainWindow::MainWindow(const wxString& title, int width, int height)
  : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(width, height))
{
  // add ze panel to ze frame
  m_Panel = new wxPanel(this, wxID_ANY);

  // text box heer
  m_Textbox = new wxTextCtrl
  (
    m_Panel, wxID_ANY, wxT("hello world"), 
    wxPoint(5,5), wxSize(160, 24)
  );

  /* Center the window on the screen. */
  Centre();
} /*** end of MainWindow ***/

/*********************************** end of mainwindow.cpp *****************************/

