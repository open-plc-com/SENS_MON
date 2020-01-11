/*
	Name:
	Purpose:		myframe.cpp
	Author:			www.open-plc.com
	Created:		2020/01
	Modified by:
	RCS-ID:
	Copyright:		(c) Open-PLC
	Licence:		The MIT License (MIT)
*/


#include "myframe.h"
#include "icon.xpm"
//#include "connect.xpm"
#include "pw_r.xpm"
#include "pw_g.xpm"
//#include "empty.xpm"

//#include "set_com.cpp"
//#include "files.cpp"
//#include "myframe_events.cpp"
//#include "run_handler.cpp"
//#include "com_r_handler.cpp"
//#include "data_handler.cpp"


// ===========================================================================
// ===							  MyFrame								   ===
// ===========================================================================
MyFrame::MyFrame( wxWindow*			parent,
// ===========================================================================
				  wxWindowID		id,
				  const wxString&	title,
				  const wxPoint&	pos,
				  const wxSize&		size,
				  long style )
	   : MyFrameFB( parent, id, title, pos, size, style )
{
	int			i, n, x, y;//, com_nn;
	wxString	s;

	SetIcon( wxIcon( icon_xpm ) );	// Set Icon

	_log = m_log;

	OnPathInit();

	GetSize( &x, &y );
	SetMinSize( wxSize( x, y ) );
	SetMaxSize( wxSize( ( x + 20 ), ( y + 20 ) ) );
	Fit();
	SetSize( wxSize( x, y ) );
	SetMaxSize( wxSize( -1, -1 ) );

	if( !Read_Cfg() )
	{
		if( Win_SizeX && Win_SizeY  )	// Restore size & position
		{
			if( ( Win_PosX >= 0 ) && ( Win_PosY >= 0 ) )
			{
				Move( Win_PosX, Win_PosY );
			}
			if( Win_SizeX && Win_SizeY )
			{
				SetSize( wxSize( Win_SizeX, Win_SizeY ) );
			}
			if( Read_Win_MaxSize )
			{
			Win_MaxSize = true;
			Maximize();
			}
			else
			{
				Win_MaxSize = false;
			}
		}

		if( COM_NN > 0 )
		{
			s.Printf( wxT( "COM%d" ), COM_NN );
			m_text_com->SetValue( s );
			m_bitmap_com_status->SetBitmap( pw_r_xpm );
		}
	}


// ---------------------------------------------------------------------------
// Start threads
// ---------------------------------------------------------------------------

	com_read_thread_ptr = CreateThread();
	if( com_read_thread_ptr->Run() != wxTHREAD_NO_ERROR )
	{
		wxMessageBox( wxT( "Can't start COM read thread" ) );
		Close();
	}





//	OnInit();
//	IsConnected		= false;
//	CheckStartStop	= true;
//	IsRun			= false;
//	Stop			= TRUE;
//


//m_toolBar->SetToolNormalBitmap(ID_TOOL_CONNECT,connect_xpm);
//m_toolBar->SetToolShortHelp(ID_TOOL_CONNECT,MSG_001);
//ID_TOOL_CONNECT


//	GetSize( &x, &y );
//	//m_grid->SetMinSize( wxSize( n, -1 ) );
//	SetMinSize( wxSize( x, y ) );
//	SetMaxSize( wxSize( ( x + 20 ), ( y + 20 ) ) );
//	//m_grid->Fit();
//	Fit();
//	SetSize( wxSize( x, y ) );
//	SetMaxSize( wxSize( -1, -1 ) );
//	//m_grid->Refresh();
//	Refresh();


//m_toolBar->EnableTool( ID_TOOL_STOP, false );
//m_toolBar->EnableTool( ID_TOOL_RUN, false );

//	// ---------------------------------------------------------------------------
//	// Инициализировать m_plot
//	// ---------------------------------------------------------------------------
//
//	wxFont graphFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL );
//	//mpScaleX *xaxis = new mpScaleX( wxT( "X градусы" ), mpALIGN_BOTTOM, true, mpX_NORMAL );
//	mpScaleX *xaxis = new mpScaleX( wxT( "X градусы" ), mpALIGN_BOTTOM, true, mpX_GRAD );
//	mpScaleY *yaxis = new mpScaleY( wxT( "Y %" ), mpALIGN_LEFT, true );
//	xaxis->SetFont( graphFont );
//	yaxis->SetFont( graphFont );
//	xaxis->SetDrawOutsideMargins( false );
//	yaxis->SetDrawOutsideMargins( false );
//	m_plot->SetMargins( 0, 0, 30, 70 );
//	m_plot->AddLayer( xaxis );
//	m_plot->AddLayer( yaxis );
//	wxBrush hatch( wxColour( 163, 208, 212 ), wxSOLID );
//
//	SetAutoLayout( TRUE );
//	m_plot->EnableDoubleBuffer( true );
//
//	wxPen mypen( *wxBLUE, 2, wxSOLID );
//	vectorLayer = new mpFXYVector( wxEmptyString, -1 );
//	vectorLayer->SetPen( mypen );
//	vectorLayer->SetContinuity( true );
//
//	m_plot->AddLayer( vectorLayer );
//	vectorLayer->SetData( vectorx, vectory );
//	m_plot->Fit();
//
//	vectorLayer->SetData( vectorx, vectory );
//
//	m_plot->Fit();
//	m_plot->ZoomOut();

//// ---------------------------------------------------------------------------
//// Start threads
//// ---------------------------------------------------------------------------
//
//	run_thread_ptr = CreateThread();
//	if( run_thread_ptr->Run() != wxTHREAD_NO_ERROR )
//	{
//		wxMessageBox( wxT( "Can't start Run thread!" ) );
//		Close();
//	}
//
//	//IsRunData = false;
//	data_thread_ptr = CreateDataThread();
//	data_thread_ptr->SetPriority( 100 );
//	if( data_thread_ptr->Run() != wxTHREAD_NO_ERROR )
//	{
//		wxMessageBox( wxT( "Can't start Data thread!" ) );
//		Close();
//	}


//m_start->SetFocus();
////m_start->MoveAfterInTabOrder( m_stop );

}
// === end of MyFrame::MyFrame ===============================================


// ===========================================================================
MyFrame::~MyFrame()
// ===========================================================================
{
Write_Cfg();
	delete IO_COM;
}
// ===========================================================================


// ===========================================================================
void MyFrame::OnExit( wxCommandEvent &WXUNUSED(event) )		// ID_TOOL_EXIT event
// ===========================================================================
{
	Close();
}
// ===========================================================================


// ===========================================================================
void MyFrame::OnSize( wxSizeEvent &event )
// ===========================================================================
{
	wxString	s;
	wxPoint		pos  = GetPosition();
	wxSize		size = event.GetSize();

	if( ( pos.x >= 0 ) && ( pos.y >= 0 ) )
	{
		Win_MaxSize		= false;
		Win_PosX		= pos.x;
		Win_PosY		= pos.y;
		Win_SizeX		= size.x;
		Win_SizeY		= size.y;
	}
	event.Skip();
}
// ===========================================================================


// ===========================================================================
void MyFrame::OnMove( wxMoveEvent &event )
// ===========================================================================
{
	wxString	s;
	wxPoint		pos = GetPosition();

	if( ( pos.x >= 0 ) && ( pos.y >= 0 ) )
	{
		Win_PosX	= pos.x;
		Win_PosY	= pos.y;
	}
	//m_grid->Refresh();
	Refresh();
    event.Skip();
}
// ===========================================================================


// ===========================================================================
void MyFrame::OnMaximized( wxMaximizeEvent &event )
// ===========================================================================
{
	Win_MaxSize = true;
	event.Skip();
}
// ===========================================================================




BEGIN_EVENT_TABLE( MyFrame, MyFrameFB )
	EVT_MENU( ID_TOOL_EXIT,			MyFrame::OnExit )
	EVT_MENU( ID_TOOL_COM_CONFIG,	MyFrame::OnTool_COM_Config )

	EVT_MAXIMIZE( MyFrame::OnMaximized )
	EVT_SIZE( MyFrame::OnSize )
	EVT_MOVE( MyFrame::OnMove )




//	EVT_MENU( ID_TOOL_CONNECT,		MyFrame::OnConnect )
//	EVT_MENU( ID_TOOL_RUN,			MyFrame::OnRun )
//	EVT_MENU( ID_TOOL_REVERSE,		MyFrame::OnReverse )
//	EVT_MENU( ID_TOOL_STOP,			MyFrame::OnStop )
//	EVT_MENU( ID_ACTUAL_SIZE,		MyFrame::ActualSize )
//	EVT_MENU( ID_TOOL_SAVE,			MyFrame::OnFile )
//	EVT_MENU( ID_WINDOW_SIZE,		MyFrame::OnWinSelect )
//
///EVT_KEY_DOWN( MyFrame::OnKeyDown )
//
//
///	EVT_MENU( ID_TOOL_REFRESH,		MyFrame::OnRefresh )
///	EVT_MENU( ID_TOOL_FILE,			MyFrame::OnFile )
///	EVT_MENU( ID_ZONE_SIZE,			MyFrame::ZoneSize )
END_EVENT_TABLE()
