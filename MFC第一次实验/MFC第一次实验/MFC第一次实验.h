
// MFC第一次实验.h : MFC第一次实验 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC第一次实验App:
// 有关此类的实现，请参阅 MFC第一次实验.cpp
//

class CMFC第一次实验App : public CWinApp
{
public:
	CMFC第一次实验App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC第一次实验App theApp;
