
// 3月10日实验4View.cpp : CMy3月10日实验4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3月10日实验4.h"
#endif

#include "3月10日实验4Doc.h"
#include "3月10日实验4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3月10日实验4View

IMPLEMENT_DYNCREATE(CMy3月10日实验4View, CView)

BEGIN_MESSAGE_MAP(CMy3月10日实验4View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3月10日实验4View 构造/析构

CMy3月10日实验4View::CMy3月10日实验4View()
{
	// TODO: 在此处添加构造代码

}

CMy3月10日实验4View::~CMy3月10日实验4View()
{
}

BOOL CMy3月10日实验4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3月10日实验4View 绘制

void CMy3月10日实验4View::OnDraw(CDC* /*pDC*/)
{
	CMy3月10日实验4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy3月10日实验4View 打印

BOOL CMy3月10日实验4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy3月10日实验4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy3月10日实验4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy3月10日实验4View 诊断

#ifdef _DEBUG
void CMy3月10日实验4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3月10日实验4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3月10日实验4Doc* CMy3月10日实验4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3月10日实验4Doc)));
	return (CMy3月10日实验4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3月10日实验4View 消息处理程序


void CMy3月10日实验4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy3月10日实验4Doc* pDoc = GetDocument();
	int a = pDoc->A;
	int b = pDoc->B;

	CString s1 = _T("A+B=");
	s1.Format(_T("A+B="));
	CString s2;
	s2.Format(_T("%d"), a + b);
	CString s = s1 + s2;
	CClientDC dc(this);
	dc.TextOutW(300, 300, s);

	CView::OnLButtonDown(nFlags, point);
}
