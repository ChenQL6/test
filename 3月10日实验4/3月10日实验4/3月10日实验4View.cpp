
// 3��10��ʵ��4View.cpp : CMy3��10��ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3��10��ʵ��4.h"
#endif

#include "3��10��ʵ��4Doc.h"
#include "3��10��ʵ��4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3��10��ʵ��4View

IMPLEMENT_DYNCREATE(CMy3��10��ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy3��10��ʵ��4View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy3��10��ʵ��4View ����/����

CMy3��10��ʵ��4View::CMy3��10��ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy3��10��ʵ��4View::~CMy3��10��ʵ��4View()
{
}

BOOL CMy3��10��ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3��10��ʵ��4View ����

void CMy3��10��ʵ��4View::OnDraw(CDC* /*pDC*/)
{
	CMy3��10��ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3��10��ʵ��4View ��ӡ

BOOL CMy3��10��ʵ��4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3��10��ʵ��4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3��10��ʵ��4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy3��10��ʵ��4View ���

#ifdef _DEBUG
void CMy3��10��ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3��10��ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3��10��ʵ��4Doc* CMy3��10��ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3��10��ʵ��4Doc)));
	return (CMy3��10��ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3��10��ʵ��4View ��Ϣ�������


void CMy3��10��ʵ��4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy3��10��ʵ��4Doc* pDoc = GetDocument();
	int a = pDoc->A;
	int b = pDoc->B;

	CString s1 = _T("A+B=");
	s1.Format(_T("A+B="));
	CString s2;
	s2.Format(_T("%d"), a + b);
	CString s = s1 + s2;
	CClientDC dc(this);
	dc.TextOutW(300, 300, s);

	CView::OnLButtonDown(nFlags, point);
}
