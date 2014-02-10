/* Rocrail - Model Railroad Software Copyright (C) 2002-2014 Rob Versluis, Rocrail.net  This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.*/#ifndef __cmdrecorder__#define __cmdrecorder__/**@fileSubclass of CmdRecorderGen, which is generated by wxFormBuilder.*/#include "cmdrecordergen.h"//// end generated include/** Implementing CmdRecorderGen */class CmdRecorder : public CmdRecorderGen{  void initList();  void initLabels();  CmdRecorder** m_Me;	protected:		// Handlers for CmdRecorderGen events.		void onRecord( wxCommandEvent& event );		void onStop( wxCommandEvent& event );		void onPause( wxCommandEvent& event );		void onPlay( wxCommandEvent& event );		void onCmdSelected( wxCommandEvent& event );		void onModify( wxCommandEvent& event );		void onImport( wxCommandEvent& event );    void onExport( wxCommandEvent& event );		void onDelete( wxCommandEvent& event );    void onInsert( wxCommandEvent& event );		void onOK( wxCommandEvent& event );    void onClose( wxCloseEvent& event );    void onClear( wxCommandEvent& event );	public:		/** Constructor */		CmdRecorder( wxWindow* parent );		void SetMe( CmdRecorder** me) {m_Me=me;}	//// end generated class members	};#endif // __cmdrecorder__