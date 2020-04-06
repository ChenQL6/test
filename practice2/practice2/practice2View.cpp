
// practice2View.cpp : Cpractice2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "practice2.h"
#endif

#include "practice2Doc.h"
#include "practice2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cpractice2View

IMPLEMENT_DYNCREATE(Cpractice2View, CView)

BEGIN_MESSAGE_MAP(Cpractice2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cpractice2View ����/����

Cpractice2View::Cpractice2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cpractice2View::~Cpractice2View()
{
}

BOOL Cpractice2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cpractice2View ����

void Cpractice2View::OnDraw(CDC* /*pDC*/)
{
	Cpractice2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cpractice2View ��ӡ

BOOL Cpractice2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cpractice2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cpractice2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cpractice2View ���

#ifdef _DEBUG
void Cpractice2View::AssertValid() const
{
	CView::AssertValid();
}

void Cpractice2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cpractice2Doc* Cpractice2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cpractice2Doc)));
	return (Cpractice2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cpractice2View ��Ϣ�������


void Cpractice2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	//��2���������Բ
	int a = rand() % 50 + 5;  //����
	int b=  rand() % 60 + 8;  //����
	CClientDC dc(this);
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	dc.Ellipse(cr);

	CView::OnLButtonDown(nFlags, point);
}
