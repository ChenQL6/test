
// 0330����ʵ��1��ͼ���̣�.h : 0330����ʵ��1��ͼ���̣� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0330����ʵ��1��ͼ���̣�App:
// �йش����ʵ�֣������ 0330����ʵ��1��ͼ���̣�.cpp
//

class CMy0330����ʵ��1��ͼ���̣�App : public CWinApp
{
public:
	CMy0330����ʵ��1��ͼ���̣�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0330����ʵ��1��ͼ���̣�App theApp;
