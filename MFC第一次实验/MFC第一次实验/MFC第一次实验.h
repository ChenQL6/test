
// MFC��һ��ʵ��.h : MFC��һ��ʵ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC��һ��ʵ��App:
// �йش����ʵ�֣������ MFC��һ��ʵ��.cpp
//

class CMFC��һ��ʵ��App : public CWinApp
{
public:
	CMFC��һ��ʵ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC��һ��ʵ��App theApp;
