
// KeyGeneratorDlg.h : header file
//

#pragma once


// CKeyGeneratorDlg dialog
class CKeyGeneratorDlg : public CDialogEx
{
// Construction
public:
	CKeyGeneratorDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_KEYGENERATOR_DIALOG };
#endif

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
	CEdit m_ctrlName;
	CString m_strName;
	CEdit m_ctrlSerial;
	CString m_strSerial;
	afx_msg void OnBnClickedBtnExit();
	afx_msg void OnBnClickedBtnGenerate();
};
