
// MFC�ڿͻ�����ʾλͼ0324View.cpp : CMFC�ڿͻ�����ʾλͼ0324View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC�ڿͻ�����ʾλͼ0324.h"
#endif

#include "MFC�ڿͻ�����ʾλͼ0324Doc.h"
#include "MFC�ڿͻ�����ʾλͼ0324View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC�ڿͻ�����ʾλͼ0324View

IMPLEMENT_DYNCREATE(CMFC�ڿͻ�����ʾλͼ0324View, CView)

BEGIN_MESSAGE_MAP(CMFC�ڿͻ�����ʾλͼ0324View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFC�ڿͻ�����ʾλͼ0324View ����/����

CMFC�ڿͻ�����ʾλͼ0324View::CMFC�ڿͻ�����ʾλͼ0324View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMFC�ڿͻ�����ʾλͼ0324View::~CMFC�ڿͻ�����ʾλͼ0324View()
{
}

BOOL CMFC�ڿͻ�����ʾλͼ0324View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC�ڿͻ�����ʾλͼ0324View ����

void CMFC�ڿͻ�����ʾλͼ0324View::OnDraw(CDC* pDC)
{
	CMFC�ڿͻ�����ʾλͼ0324Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CMFC�ڿͻ�����ʾλͼ0324View ��ӡ

BOOL CMFC�ڿͻ�����ʾλͼ0324View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFC�ڿͻ�����ʾλͼ0324View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFC�ڿͻ�����ʾλͼ0324View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFC�ڿͻ�����ʾλͼ0324View ���

#ifdef _DEBUG
void CMFC�ڿͻ�����ʾλͼ0324View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC�ڿͻ�����ʾλͼ0324View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC�ڿͻ�����ʾλͼ0324Doc* CMFC�ڿͻ�����ʾλͼ0324View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC�ڿͻ�����ʾλͼ0324Doc)));
	return (CMFC�ڿͻ�����ʾλͼ0324Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC�ڿͻ�����ʾλͼ0324View ��Ϣ�������
