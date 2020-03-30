
// ʵ��3.1View.cpp : Cʵ��31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��3.1.h"
#endif

#include "ʵ��3.1Doc.h"
#include "ʵ��3.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��31View

IMPLEMENT_DYNCREATE(Cʵ��31View, CView)

BEGIN_MESSAGE_MAP(Cʵ��31View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cʵ��31View ����/����

Cʵ��31View::Cʵ��31View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��31View::~Cʵ��31View()
{
}

BOOL Cʵ��31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��31View ����

void Cʵ��31View::OnDraw(CDC* /*pDC*/)
{
	Cʵ��31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cʵ��31View ��ӡ

BOOL Cʵ��31View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cʵ��31View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cʵ��31View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cʵ��31View ���

#ifdef _DEBUG
void Cʵ��31View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��31Doc* Cʵ��31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��31Doc)));
	return (Cʵ��31Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��31View ��Ϣ�������


void Cʵ��31View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��31Doc* pDoc = GetDocument();
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


void Cʵ��31View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->flag = true;
	pDoc->x1 = point.x;
	pDoc->y1 = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��31View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->flag = false;
	CDC* pDC = GetDC();
	CString s;
	s.Format(L"mousemove������%d������һ����%d����", pDoc->count, pDoc->num);
	pDC->TextOutW(20, 20, s);

	CView::OnLButtonUp(nFlags, point);
}
