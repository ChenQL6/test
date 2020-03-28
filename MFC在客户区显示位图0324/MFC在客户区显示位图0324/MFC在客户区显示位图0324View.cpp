
// MFC在客户区显示位图0324View.cpp : CMFC在客户区显示位图0324View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC在客户区显示位图0324.h"
#endif

#include "MFC在客户区显示位图0324Doc.h"
#include "MFC在客户区显示位图0324View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC在客户区显示位图0324View

IMPLEMENT_DYNCREATE(CMFC在客户区显示位图0324View, CView)

BEGIN_MESSAGE_MAP(CMFC在客户区显示位图0324View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFC在客户区显示位图0324View 构造/析构

CMFC在客户区显示位图0324View::CMFC在客户区显示位图0324View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFC在客户区显示位图0324View::~CMFC在客户区显示位图0324View()
{
}

BOOL CMFC在客户区显示位图0324View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC在客户区显示位图0324View 绘制

void CMFC在客户区显示位图0324View::OnDraw(CDC* pDC)
{
	CMFC在客户区显示位图0324Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CMFC在客户区显示位图0324View 打印

BOOL CMFC在客户区显示位图0324View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFC在客户区显示位图0324View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFC在客户区显示位图0324View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFC在客户区显示位图0324View 诊断

#ifdef _DEBUG
void CMFC在客户区显示位图0324View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC在客户区显示位图0324View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC在客户区显示位图0324Doc* CMFC在客户区显示位图0324View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC在客户区显示位图0324Doc)));
	return (CMFC在客户区显示位图0324Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC在客户区显示位图0324View 消息处理程序
