
// MFC��һ��ʵ��View.cpp : CMFC��һ��ʵ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC��һ��ʵ��.h"
#endif

#include "MFC��һ��ʵ��Doc.h"
#include "MFC��һ��ʵ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC��һ��ʵ��View

IMPLEMENT_DYNCREATE(CMFC��һ��ʵ��View, CView)

BEGIN_MESSAGE_MAP(CMFC��һ��ʵ��View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFC��һ��ʵ��View ����/����

CMFC��һ��ʵ��View::CMFC��һ��ʵ��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC��һ��ʵ��View::~CMFC��һ��ʵ��View()
{
}

BOOL CMFC��һ��ʵ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC��һ��ʵ��View ����

void CMFC��һ��ʵ��View::OnDraw(CDC* pDC)
{
	CMFC��һ��ʵ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s = _T("���ǳ�����");
	int a = 1;
	CString A;
	A.Format(_T("%d"), a);
	pDC->TextOutW(200, 200, s);
}


// CMFC��һ��ʵ��View ��ӡ

BOOL CMFC��һ��ʵ��View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFC��һ��ʵ��View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFC��һ��ʵ��View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFC��һ��ʵ��View ���

#ifdef _DEBUG
void CMFC��һ��ʵ��View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC��һ��ʵ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC��һ��ʵ��Doc* CMFC��һ��ʵ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC��һ��ʵ��Doc)));
	return (CMFC��һ��ʵ��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC��һ��ʵ��View ��Ϣ�������
