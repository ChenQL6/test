
// MFCProjectView.cpp : CMFCProjectView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCProject.h"
#endif

#include "MFCProjectDoc.h"
#include "MFCProjectView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCProjectView

IMPLEMENT_DYNCREATE(CMFCProjectView, CView)

BEGIN_MESSAGE_MAP(CMFCProjectView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCProjectView 构造/析构

CMFCProjectView::CMFCProjectView()
{
	// TODO: 在此处添加构造代码

}

CMFCProjectView::~CMFCProjectView()
{
}

BOOL CMFCProjectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCProjectView 绘制

void CMFCProjectView::OnDraw(CDC* pDC)
{
	CMFCProjectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s = _T("我是陈秋琳");
	int a = 1;
	CString A;
	A.Format(_T("%d"), a);

	//pDC->TextOutW(200, 200, s);
	//pDC->TextOutW(300, 300, A);

	//pDC->TextOutW(200, 200, pDoc->s);
	//pDC->TextOutW(300, 300, pDoc->A);
}


// CMFCProjectView 诊断

#ifdef _DEBUG
void CMFCProjectView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCProjectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCProjectDoc* CMFCProjectView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCProjectDoc)));
	return (CMFCProjectDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCProjectView 消息处理程序


void CMFCProjectView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCProjectDoc* pDoc1 = GetDocument();
	int count = 0;
	pDoc1->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCProjectView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCProjectDoc* pDoc2=GetDocument();
	CString D;
	int count = 0;
	D.Format(_T("count的值(%d)"),pDoc2->count);
	CClientDC dc(this);
	dc.TextOutW(200,200,D);
	CView::OnRButtonDown(nFlags, point);
}
