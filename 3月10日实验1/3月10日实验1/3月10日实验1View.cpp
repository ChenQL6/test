
// 3��10��ʵ��1View.cpp : CMy3��10��ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3��10��ʵ��1.h"
#endif

#include "3��10��ʵ��1Doc.h"
#include "3��10��ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3��10��ʵ��1View

IMPLEMENT_DYNCREATE(CMy3��10��ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy3��10��ʵ��1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3��10��ʵ��1View ����/����

CMy3��10��ʵ��1View::CMy3��10��ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy3��10��ʵ��1View::~CMy3��10��ʵ��1View()
{
}

BOOL CMy3��10��ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3��10��ʵ��1View ����

void CMy3��10��ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy3��10��ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3��10��ʵ��1View ��ӡ

BOOL CMy3��10��ʵ��1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3��10��ʵ��1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3��10��ʵ��1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy3��10��ʵ��1View ���

#ifdef _DEBUG
void CMy3��10��ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3��10��ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3��10��ʵ��1Doc* CMy3��10��ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3��10��ʵ��1Doc)));
	return (CMy3��10��ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3��10��ʵ��1View ��Ϣ�������


void CMy3��10��ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//�ڣ�1���⻭Բ
	int r;
	CRect cr;
	this->GetClientRect(&cr);
	//dc.Ellipse(cr);
	if (cr.bottom - cr.top>cr.right - cr.left)
		r = (cr.right - cr.left) / 2;
	else
		r = (cr.bottom + cr.top) / 2;
	CClientDC dc(this);
	dc.Ellipse((cr.right - cr.left) / 2 - r, (cr.bottom - cr.top) / 2 - r, (cr.right - cr.left) / 2 + r, (cr.bottom - cr.top) / 2 + r);


	CView::OnLButtonDown(nFlags, point);
}
