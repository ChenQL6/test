
// 3��10��ʵ��3View.cpp : CMy3��10��ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3��10��ʵ��3.h"
#endif

#include "3��10��ʵ��3Doc.h"
#include "3��10��ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy3��10��ʵ��3View

IMPLEMENT_DYNCREATE(CMy3��10��ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy3��10��ʵ��3View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy3��10��ʵ��3View ����/����

CMy3��10��ʵ��3View::CMy3��10��ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy3��10��ʵ��3View::~CMy3��10��ʵ��3View()
{
}

BOOL CMy3��10��ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy3��10��ʵ��3View ����

void CMy3��10��ʵ��3View::OnDraw(CDC* /*pDC*/)
{
	CMy3��10��ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy3��10��ʵ��3View ��ӡ

BOOL CMy3��10��ʵ��3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy3��10��ʵ��3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy3��10��ʵ��3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy3��10��ʵ��3View ���

#ifdef _DEBUG
void CMy3��10��ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy3��10��ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy3��10��ʵ��3Doc* CMy3��10��ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy3��10��ʵ��3Doc)));
	return (CMy3��10��ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy3��10��ʵ��3View ��Ϣ�������


void CMy3��10��ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s = _T("�����������");
	dc.TextOutW(200, 200, s);

	CView::OnLButtonDown(nFlags, point);
}


void CMy3��10��ʵ��3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s = _T("�������̧��");
	dc.TextOutW(300, 300, s);

	CView::OnLButtonUp(nFlags, point);
}
