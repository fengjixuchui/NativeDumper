#if !defined(AFX_MODULESDLG_H__475D31CD_C05E_471B_A736_52D5392DDF07__INCLUDED_)
#define AFX_MODULESDLG_H__475D31CD_C05E_471B_A736_52D5392DDF07__INCLUDED_

#include "DumpModuleDlg.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ModulesDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ModulesDlg dialog

class ModulesDlg : public CDialog
{
// Construction
public:
	ModulesDlg(CWnd* pParent = NULL);   // standard constructor
	ModulesDlg& operator=(ModulesDlg& right); // Overload Assignment Operator
	void RefreshModulesList();

	int processid;
	CString processname;
	DumpModuleDlg dumpmoduledlg;

// Dialog Data
	//{{AFX_DATA(ModulesDlg)
	enum { IDD = IDD_MODULES };
	CListCtrl	m_cListCtrl;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ModulesDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ModulesDlg)
	afx_msg void OnClose();
	virtual BOOL OnInitDialog();
	afx_msg void OnRclickList1(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODULESDLG_H__475D31CD_C05E_471B_A736_52D5392DDF07__INCLUDED_)
