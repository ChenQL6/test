
// practice3View.cpp : Cpractice3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "practice3.h"
#endif

#include "practice3Doc.h"
#include "practice3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cpractice3View

IMPLEMENT_DYNCREATE(Cpractice3View, CView)

BEGIN_MESSAGE_MAP(Cpractice3View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cpractice3View ����/����

Cpractice3View::Cpractice3View()
{
	// TODO: �ڴ˴���ӹ������

}

Cpractice3View::~Cpractice3View()
{
}

BOOL Cpractice3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cpractice3View ����

void Cpractice3View::OnDraw(CDC* /*pDC*/)
{
	Cpractice3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cpractice3View ��ӡ

BOOL Cpractice3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cpractice3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cpractice3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cpractice3View ���

#ifdef _DEBUG
void Cpractice3View::AssertValid() const
{
	CView::AssertValid();
}

void Cpractice3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cpractice3Doc* Cpractice3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cpractice3Doc)));
	return (Cpractice3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cpractice3View ��Ϣ�������


void Cpractice3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s = _T("�����������");
	dc.TextOutW(200, 200, s);

	CView::OnLButtonDown(nFlags, point);
}


void Cpractice3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s = _T("�������̧��");
	dc.TextOutW(300, 300, s);
	CView::OnLButtonUp(nFlags, point);
}
