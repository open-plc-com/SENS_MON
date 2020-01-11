/*
	Name:
	Purpose:		sensh
	Author:			www.open-plc.com
	Created:		2019/07
	Modified by:
	RCS-ID:
	Copyright:		(c) Open-PLC
	Licence:		The MIT License (MIT)
*/


#ifndef __MyFrame__
#define __MyFrame__

#include <wx/msgdlg.h>
#include "myframe_fb.h"

class Run_Thread;
class COM_Read_Thread;

// ===========================================================================
class MyFrame : public MyFrameFB
// ===========================================================================
{
	private:
		DECLARE_EVENT_TABLE()
static inline wxChar GetChar(bool on, wxChar c) { return on ? c : _T('-'); }

	public:
		MyFrame( wxWindow *parent,
				 wxWindowID id			= wxID_ANY,
				 const wxString &title	= wxEmptyString,
				 const wxPoint &pos		= wxDefaultPosition,
				 const wxSize &size		= wxSize( 840,600 ),
				 long  style			= wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL );
				 //long style			= wxCAPTION |
										  //wxCLOSE_BOX |
										  //wxICONIZE |
										  //wxMINIMIZE |
										  //wxMINIMIZE_BOX |
										  //wxSYSTEM_MENU |
										  //wxTAB_TRAVERSAL );
		~MyFrame();

		//wxBitmap	wxGetBitmapFromMemory( const void *data, size_t length );

void OnPathInit();
int Read_Cfg();
void Write_Cfg();






		//bool			IsConnected;
		//volatile bool	CheckStartStop;
		//int				amp;
		//static volatile	bool	IsRun;
		//wxArrayString			port_list;
		//DataIO_Com				*io_com;

		//std::vector<float>	vectorx, vectory;
		//mpFXYVector			*vectorLayer;
		//mpScaleX			*xaxis;
		//mpScaleY			*yaxis;

		//Run_Thread			*CreateThread(), *run_thread_ptr;
		COM_Read_Thread			*CreateThread(), *com_read_thread_ptr;
		//Data_Thread			*data_thread_ptr;
		//Data_Thread			*CreateDataThread(), *data_thread_ptr;







		// Event handlers, static
		// ----------------------
		void OnMaximized( wxMaximizeEvent &event );
		void OnSize( wxSizeEvent &event );
		void OnMove( wxMoveEvent &event );

		void OnExit( wxCommandEvent &event );

		void OnTool_COM_Config( wxCommandEvent &event );


//void OnTool_New_Prj( wxCommandEvent &event );
//void OnTool_Open_Prj( wxCommandEvent &event );
//void OnTool_Close_Prj( wxCommandEvent &event );
//void OnTool_Save_Prj( wxCommandEvent &event );
//void OnExit( wxCommandEvent &event );


//void OnTool_UART_config( wxCommandEvent &event );
//void OnTool_UART_help( wxCommandEvent &event );
//void OnTool_I2C_help( wxCommandEvent &event );

//void OnCANHelp( wxCommandEvent &event );
//void OnMyAbout( wxCommandEvent &event );
//void OnMyFunctions( wxCommandEvent &event );
//void OnTool_Generate_FW( wxCommandEvent &event );
//void Asc_to_Save( void );




//		void	OnConnect( wxCommandEvent &event );
//		void	OnWinSelect( wxCommandEvent &event );
//		//void COM_Select::FB_COM_select( wxCommandEvent& event );
////		void	OnRefresh( wxCommandEvent &event );
//		void	OnRun( wxCommandEvent &event );
//		void	OnReverse( wxCommandEvent &event );
//		void	OnStop( wxCommandEvent &event );
//		void	OnFile( wxCommandEvent &event );
//		void	ActualSize( wxCommandEvent &event );
////		void	ZoneSize( wxCommandEvent &event );
//		void OnCharStart( wxKeyEvent& event );
//		void OnCharStop( wxKeyEvent& event );
//		void OnCharAmp( wxKeyEvent& event );

//void OnKeyDown(wxKeyEvent &event);

//		// Event handlers, overide them in your derived class
//		void	OnCheckStart( wxCommandEvent& event );
//		void	OnCheckStop( wxCommandEvent& event );
//		void	OnCheckStartTab( wxKeyEvent& event );

	//// end generated class members
};


#endif // __MyFrame__
