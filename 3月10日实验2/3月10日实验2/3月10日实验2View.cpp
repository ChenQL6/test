
// 3��10��ʵ��2View.cpp : CMy3��10��ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3��10��ʵ��2.h"
#endif

#include "3��10��ʵ��2Doc.h"
#include "3��10��ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3��10��ʵ��2View

IMPLEMENT_DYNCREATE(CMy3��10��ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy3��10��ʵ��2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3��10��ʵ��2View ����/����

CMy3��10��ʵ��2View::CMy3��10��ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy3��10��ʵ��2View::~CMy3��10��ʵ��2View()
{
}

BOOL CMy3��10��ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3��10��ʵ��2View ����

void CMy3��10��ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy3��10��ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3��10��ʵ��2View ��ӡ

BOOL CMy3��10��ʵ��2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3��10��ʵ��2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3��10��ʵ��2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy3��10��ʵ��2View ���

#ifdef _DEBUG
void CMy3��10��ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3��10��ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3��10��ʵ��2Doc* CMy3��10��ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3��10��ʵ��2Doc)));
	return (CMy3��10��ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3��10��ʵ��2View ��Ϣ�������


void CMy3��10��ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int a = rand() % 50 + 5;  //����
	int b = rand() % 60 + 8;  //����
	CClientDC dc(this);
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	dc.Ellipse(cr);

	CView::OnLButtonDown(nFlags, point);
}
