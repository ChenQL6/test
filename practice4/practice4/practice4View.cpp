
// practice4View.cpp : Cpractice4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "practice4.h"
#endif

#include "practice4Doc.h"
#include "practice4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cpractice4View

IMPLEMENT_DYNCREATE(Cpractice4View, CView)

BEGIN_MESSAGE_MAP(Cpractice4View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
//	ON_WM_LBUTTONDOWN()
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cpractice4View ����/����

Cpractice4View::Cpractice4View()
{
	// TODO: �ڴ˴���ӹ������

}

Cpractice4View::~Cpractice4View()
{
}

BOOL Cpractice4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cpractice4View ����

void Cpractice4View::OnDraw(CDC* pDC)
{
	Cpractice4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int a = pDoc->A;
	int b = pDoc->B;
}


// Cpractice4View ��ӡ

BOOL Cpractice4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cpractice4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cpractice4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cpractice4View ���

#ifdef _DEBUG
void Cpractice4View::AssertValid() const
{
	CView::AssertValid();
}

void Cpractice4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cpractice4Doc* Cpractice4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cpractice4Doc)));
	return (Cpractice4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cpractice4View ��Ϣ�������


//void Cpractice4View::OnLButtonDown(UINT nFlags, CPoint point)
//{
//	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
//
//	CView::OnLButtonDown(nFlags, point);
//}


void Cpractice4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cpractice4Doc* pDoc = GetDocument();
	int a = pDoc->A;
	int b = pDoc->B;

	CString s1=_T("A+B=");
	s1.Format(_T("A+B="));
	CString s2;
	s2.Format(_T("%d"), a + b);
	CString s = s1 + s2;
	CClientDC dc(this);
	dc.TextOutW(300, 300, s);


	CView::OnLButtonDown(nFlags, point);
}
