
// MFC在客户区显示位图0324.h : MFC在客户区显示位图0324 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC在客户区显示位图0324App:
// 有关此类的实现，请参阅 MFC在客户区显示位图0324.cpp
//

class CMFC在客户区显示位图0324App : public CWinApp
{
public:
	CMFC在客户区显示位图0324App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC在客户区显示位图0324App theApp;
