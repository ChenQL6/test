
// 3月10日实验2View.cpp : CMy3月10日实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3月10日实验2.h"
#endif

#include "3月10日实验2Doc.h"
#include "3月10日实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3月10日实验2View

IMPLEMENT_DYNCREATE(CMy3月10日实验2View, CView)

BEGIN_MESSAGE_MAP(CMy3月10日实验2View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3月10日实验2View 构造/析构

CMy3月10日实验2View::CMy3月10日实验2View()
{
	// TODO: 在此处添加构造代码

}

CMy3月10日实验2View::~CMy3月10日实验2View()
{
}

BOOL CMy3月10日实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy3月10日实验2View 绘制

void CMy3月10日实验2View::OnDraw(CDC* /*pDC*/)
{
	CMy3月10日实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy3月10日实验2View 打印

BOOL CMy3月10日实验2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy3月10日实验2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy3月10日实验2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy3月10日实验2View 诊断

#ifdef _DEBUG
void CMy3月10日实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3月10日实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3月10日实验2Doc* CMy3月10日实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3月10日实验2Doc)));
	return (CMy3月10日实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3月10日实验2View 消息处理程序


void CMy3月10日实验2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int a = rand() % 50 + 5;  //短轴
	int b = rand() % 60 + 8;  //长轴
	CClientDC dc(this);
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	dc.Ellipse(cr);

	CView::OnLButtonDown(nFlags, point);
}
