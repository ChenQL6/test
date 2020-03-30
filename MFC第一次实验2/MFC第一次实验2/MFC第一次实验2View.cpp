
// MFC第一次实验2View.cpp : CMFC第一次实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC第一次实验2.h"
#endif

#include "MFC第一次实验2Doc.h"
#include "MFC第一次实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC第一次实验2View

IMPLEMENT_DYNCREATE(CMFC第一次实验2View, CView)

BEGIN_MESSAGE_MAP(CMFC第一次实验2View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFC第一次实验2View 构造/析构

CMFC第一次实验2View::CMFC第一次实验2View()
{
	// TODO: 在此处添加构造代码

}

CMFC第一次实验2View::~CMFC第一次实验2View()
{
}

BOOL CMFC第一次实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC第一次实验2View 绘制

void CMFC第一次实验2View::OnDraw(CDC* pDC)
{
	CMFC第一次实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s = _T("我是陈秋琳");
	int a = 1;
	CString A;
	A.Format(_T("%d"), a);

	pDC->TextOutW(200, 200, s);
	pDC->TextOutW(300, 300, A);

	//pDC->TextOutW(200, 200, pDoc->s);
	//pDC->TextOutW(300, 300, pDoc->A);
}


// CMFC第一次实验2View 打印

BOOL CMFC第一次实验2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFC第一次实验2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFC第一次实验2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFC第一次实验2View 诊断

#ifdef _DEBUG
void CMFC第一次实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC第一次实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC第一次实验2Doc* CMFC第一次实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC第一次实验2Doc)));
	return (CMFC第一次实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC第一次实验2View 消息处理程序
