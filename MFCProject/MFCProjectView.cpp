
// MFCProjectView.cpp : CMFCProjectView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCProject.h"
#endif

#include "MFCProjectDoc.h"
#include "MFCProjectView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCProjectView

IMPLEMENT_DYNCREATE(CMFCProjectView, CView)

BEGIN_MESSAGE_MAP(CMFCProjectView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCProjectView ����/����

CMFCProjectView::CMFCProjectView()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCProjectView::~CMFCProjectView()
{
}

BOOL CMFCProjectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCProjectView ����

void CMFCProjectView::OnDraw(CDC* pDC)
{
	CMFCProjectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s = _T("���ǳ�����");
	int a = 1;
	CString A;
	A.Format(_T("%d"), a);

	//pDC->TextOutW(200, 200, s);
	//pDC->TextOutW(300, 300, A);

	//pDC->TextOutW(200, 200, pDoc->s);
	//pDC->TextOutW(300, 300, pDoc->A);
}


// CMFCProjectView ���

#ifdef _DEBUG
void CMFCProjectView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCProjectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCProjectDoc* CMFCProjectView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCProjectDoc)));
	return (CMFCProjectDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCProjectView ��Ϣ�������


void CMFCProjectView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCProjectDoc* pDoc1 = GetDocument();
	int count = 0;
	pDoc1->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CMFCProjectView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCProjectDoc* pDoc2=GetDocument();
	CString D;
	int count = 0;
	D.Format(_T("count��ֵ(%d)"),pDoc2->count);
	CClientDC dc(this);
	dc.TextOutW(200,200,D);
	CView::OnRButtonDown(nFlags, point);
}
