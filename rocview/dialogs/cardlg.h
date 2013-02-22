/*
 Rocrail - Model Railroad Software

 Copyright (C) 2002-2012 Rob Versluis, Rocrail.net

 Without an official permission commercial use is not permitted.
 Forking this project is not permitted.

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
#ifndef __cardlg__
#define __cardlg__

/**
@file
Subclass of CarDlg, which is generated by wxFormBuilder.
*/

#include "cardlggen.h"
#include "basenotebook.h"

#include "basedlg.h"
#include "rocs/public/node.h"

/** Implementing CarDlg */
class CarDlg : public cardlggen, public BaseDialog
{
  iONode m_Props;
  bool   m_bSave;
  int    m_TabAlign;
  int    m_SetPage;
  int    m_SortCol;
  int    m_FGroup;

  void initLabels();
  bool evaluate();
  void initIndex();
  void initValues();
  void initSubType();
  void initLocationCombo();
  int findID( const char* ID );
  void setSelection(const char* ID);
  void initFunctions();
  void evaluateFunctions();

public:
	/** Constructor */
  CarDlg( wxWindow* parent, iONode p_Props, bool save=true );

  void onCarImage( wxCommandEvent& event );
  void onCarList2( wxListEvent& event );
  void onNewCar( wxCommandEvent& event );
  void onDeleteCar( wxCommandEvent& event );
  void onTypeSelect( wxCommandEvent& event );
  void onApply( wxCommandEvent& event );
  void onCancel( wxCommandEvent& event );
  void onOK( wxCommandEvent& event );
  void onSetPage( wxCommandEvent& event );
  void onImport( wxCommandEvent& event );
  iONode getSelectedCar();
  void OnCopy( wxCommandEvent& event );
  void onDoc( wxCommandEvent& event );
  void onListColClick( wxListEvent& event );
  void onFG( wxCommandEvent& event );

};

#endif // __cardlg__
