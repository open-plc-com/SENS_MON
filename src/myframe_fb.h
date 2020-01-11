#ifndef __myframe_fb__
#define __myframe_fb__
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statbmp.h>
#include <wx/toolbar.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/statline.h>
#include <wx/frame.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/dialog.h>
#define ID_TOOL_EXIT 1000
#define ID_TOOL__CONNECT 1001
#define ID_TOOL__DISCONNECT 1002
#define ID_TOOL_COM_CONFIG 1003
#define ID_TOOL_RUN 1004
class MyFrameFB : public wxFrame{
private:
protected:
wxMenuBar *m_menubar1;
wxMenu *m_menu_file;
wxMenu *m_menu_tool;
wxStatusBar *m_statusBar1;
wxPanel *m_panel1;
wxPanel *m_panel2;
wxToolBar *m_toolBar;
wxStaticText *m_staticText9;
wxTextCtrl *m_text_com;
wxStaticBitmap *m_bitmap_com_status;
wxStaticLine *m_staticline1;
wxPanel *m_panel3;
wxPanel *m_panel4;
wxPanel *m_panel5;
wxPanel *m_panel6;
wxPanel *m_panel7;
wxPanel *m_panel8;
wxStaticText *m_text1;
wxTextCtrl *m_val1;
wxStaticText *m_text2;
wxTextCtrl *m_val2;
wxStaticText *m_text3;
wxTextCtrl *m_val3;
wxPanel *m_panel9;
wxPanel *m_panel10;
wxPanel *m_panel11;
wxStaticText *m_text4;
wxTextCtrl *m_val4;
wxStaticText *m_text5;
wxTextCtrl *m_val5;
wxStaticText *m_text6;
wxTextCtrl *m_val6;
wxStaticText *m_text7;
wxTextCtrl *m_val7;
wxTextCtrl *m_log;
public:
MyFrameFB( wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = wxEmptyString, const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
~MyFrameFB(); };
class Set_COM_FB : public wxDialog{
private:
protected:
wxPanel *m_panel12;
wxStaticText *m_staticText10;
wxStaticText *m_staticText11;
wxStdDialogButtonSizer *m_sdbSizer2;
wxButton *m_sdbSizer2OK;
wxButton *m_sdbSizer2Cancel;
virtual void OnChoiseCOM( wxCommandEvent &event ) { event.Skip(); }
virtual void OnOkButton( wxCommandEvent &event ) { event.Skip(); }
public:
wxChoice *m_com_choice;
wxChoice *m_speed_choice;
Set_COM_FB( wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = wxT( "Set COM-port" ), const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
~Set_COM_FB(); };
#endif
