
// 实验3.1View.cpp : C实验31View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验3.1.h"
#endif

#include "实验3.1Doc.h"
#include "实验3.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验31View

IMPLEMENT_DYNCREATE(C实验31View, CView)

BEGIN_MESSAGE_MAP(C实验31View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C实验31View 构造/析构

C实验31View::C实验31View()
{
	// TODO: 在此处添加构造代码

}

C实验31View::~C实验31View()
{
}

BOOL C实验31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验31View 绘制

void C实验31View::OnDraw(CDC* /*pDC*/)
{
	C实验31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C实验31View 打印

BOOL C实验31View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C实验31View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C实验31View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// C实验31View 诊断

#ifdef _DEBUG
void C实验31View::AssertValid() const
{
	CView::AssertValid();
}

void C实验31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验31Doc* C实验31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验31Doc)));
	return (C实验31Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验31View 消息处理程序


void C实验31View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C实验31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (pDoc->flag) {
		pDoc->x2 = pDoc->x1;
		pDoc->y2 = pDoc->y1;
		pDoc->x1 = point.x;
		pDoc->y1 = point.y;
		pDoc->count++;
		pDoc->num = (pDoc->x2 - pDoc->x1) + (pDoc->y2 - pDoc->y1);
		if (pDoc->num < 0)
			pDoc->num = -pDoc->num;
	}

	CView::OnMouseMove(nFlags, point);
}


void C实验31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C实验31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->flag = true;
	pDoc->x1 = point.x;
	pDoc->y1 = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void C实验31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C实验31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->flag = false;
	CDC* pDC = GetDC();
	CString s;
	s.Format(L"mousemove次数：%d，发生一次需%d像素", pDoc->count, pDoc->num);
	pDC->TextOutW(20, 20, s);

	CView::OnLButtonUp(nFlags, point);
}
