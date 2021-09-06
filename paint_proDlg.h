/*
Assigned by:
Adi tzipori - 316172998
ronen zecharya - 204175483
*/

// paint_proDlg.h : header file
//

#pragma once
#include "PictureWindow.h"
#include "afxwin.h"


// Cpaint_proDlg dialog
class Cpaint_proDlg : public CDialogEx
{
// Construction
public:
	CPictureWindow objPictureWindow;
	Cpaint_proDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_paint_pro_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CButton startButton;
};
