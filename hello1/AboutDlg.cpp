// aboutdlg.cpp : implementation of the CAboutDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "resource.h"

#include "aboutdlg.h"

LRESULT CAboutDlg::OnInitDialog(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	CenterWindow(GetParent());
	return TRUE;
}


LRESULT CAboutDlg::OnCloseCmd(WORD /*wNotifyCode*/, WORD wID, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	::MessageBox(NULL, TEXT("ok"), TEXT("ok close"), BN_CLICKED);
	EndDialog(wID);
	return 0;
}

LRESULT CAboutDlg::about_message(WORD /*wNotifyCode*/, WORD wID, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	::MessageBox(NULL, TEXT("ok about message"), TEXT("ok close"), BN_CLICKED);
	EndDialog(wID);
	return 0;
}

