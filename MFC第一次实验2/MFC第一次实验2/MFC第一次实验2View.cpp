
// MFC��һ��ʵ��2View.cpp : CMFC��һ��ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC��һ��ʵ��2.h"
#endif

#include "MFC��һ��ʵ��2Doc.h"
#include "MFC��һ��ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC��һ��ʵ��2View

IMPLEMENT_DYNCREATE(CMFC��һ��ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMFC��һ��ʵ��2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFC��һ��ʵ��2View ����/����

CMFC��һ��ʵ��2View::CMFC��һ��ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC��һ��ʵ��2View::~CMFC��һ��ʵ��2View()
{
}

BOOL CMFC��һ��ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC��һ��ʵ��2View ����

void CMFC��һ��ʵ��2View::OnDraw(CDC* pDC)
{
	CMFC��һ��ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s = _T("���ǳ�����");
	int a = 1;
	CString A;
	A.Format(_T("%d"), a);

	pDC->TextOutW(200, 200, s);
	pDC->TextOutW(300, 300, A);

	//pDC->TextOutW(200, 200, pDoc->s);
	//pDC->TextOutW(300, 300, pDoc->A);
}


// CMFC��һ��ʵ��2View ��ӡ

BOOL CMFC��һ��ʵ��2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFC��һ��ʵ��2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFC��һ��ʵ��2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFC��һ��ʵ��2View ���

#ifdef _DEBUG
void CMFC��һ��ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC��һ��ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC��һ��ʵ��2Doc* CMFC��һ��ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC��һ��ʵ��2Doc)));
	return (CMFC��һ��ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC��һ��ʵ��2View ��Ϣ�������
