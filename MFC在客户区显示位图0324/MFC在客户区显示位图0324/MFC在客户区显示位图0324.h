
// MFC�ڿͻ�����ʾλͼ0324.h : MFC�ڿͻ�����ʾλͼ0324 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC�ڿͻ�����ʾλͼ0324App:
// �йش����ʵ�֣������ MFC�ڿͻ�����ʾλͼ0324.cpp
//

class CMFC�ڿͻ�����ʾλͼ0324App : public CWinApp
{
public:
	CMFC�ڿͻ�����ʾλͼ0324App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC�ڿͻ�����ʾλͼ0324App theApp;
