/*
 Rocrail - Model Railroad Software

 Copyright (C) 2002-2014 Rob Versluis, Rocrail.net

 


 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 3
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
#ifndef __stagedlg__
#define __stagedlg__

/**
@file
Subclass of stagedlggen, which is generated by wxFormBuilder.
*/

#include "stagedlggen.h"
#include "basedlg.h"

#include "rocs/public/node.h"

/** Implementing stagedlggen */
class StageDlg : public stagedlggen, public BaseDialog
{
  iONode m_Props;
  iONode m_Section;
  int    m_TabAlign;
  int    m_SetPage;
  int    m_SortCol;

  void initLabels();
  bool evaluate();
  void initSections();
  void initValues();
  void initIndex();
  int findID( const char* ID );
  void setSelection(const char* ID);
  int getLength(iONode stage, int* nrsection);


protected:
	// Handlers for stagedlggen events.
	void OnSectionList( wxCommandEvent& event );
	void OnSectionAdd( wxCommandEvent& event );
	void OnSectionModify( wxCommandEvent& event );
	void OnSectionDelete( wxCommandEvent& event );
  void OnCancel( wxCommandEvent& event );
  void OnOK( wxCommandEvent& event );
  void OnSetPage(wxCommandEvent& event);
  void OnFreeSection( wxCommandEvent& event );
  void OnSetLoco( wxCommandEvent& event );
  void OnFreeAll( wxCommandEvent& event );
  void onActions( wxCommandEvent& event );
  void onStageColumn( wxListEvent& event );
  void onStageList( wxListEvent& event );
  void onIndexNew( wxCommandEvent& event );
  void onIndexDelete( wxCommandEvent& event );
  void OnApply( wxCommandEvent& event );
  void OnHelp( wxCommandEvent& event );
  void onDoc( wxCommandEvent& event );

public:
	/** Constructor */
	StageDlg( wxWindow* parent, iONode p_Props );
};

#endif // __stagedlg__
