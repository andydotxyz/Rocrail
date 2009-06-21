///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 17 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __powerctrlgen__
#define __powerctrlgen__

#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/font.h>
#include <wx/grid.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class powerctrlgen
///////////////////////////////////////////////////////////////////////////////
class powerctrlgen : public wxDialog 
{
	private:
	
	protected:
		wxGrid* m_Boosters;
		wxButton* m_On;
		wxButton* m_Off;
		wxStdDialogButtonSizer* m_sdbSizer2;
		wxButton* m_sdbSizer2OK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onCellLeftClick( wxGridEvent& event ){ event.Skip(); }
		virtual void onCellRightClick( wxGridEvent& event ){ event.Skip(); }
		virtual void OnOn( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnOff( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnOK( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		powerctrlgen( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Power Control"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~powerctrlgen();
	
};

#endif //__powerctrlgen__
