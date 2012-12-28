
// FileTimeDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CFileTimeDlg 对话框
class CFileTimeDlg : public CDialogEx
{
// 构造
public:
	CFileTimeDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_FILETIME_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonBrowse();
	CEdit _edtFile;
	CEdit _edtOrigin;
	CEdit _edtNew;
	afx_msg void OnEnChangeEditFile();
	afx_msg void OnBnClickedButtonModify();
};
