
// 0330����ʵ��1��ͼ���̣�View.cpp : CMy0330����ʵ��1��ͼ���̣�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0330����ʵ��1��ͼ���̣�.h"
#endif

#include "0330����ʵ��1��ͼ���̣�Doc.h"
#include "0330����ʵ��1��ͼ���̣�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0330����ʵ��1��ͼ���̣�View

IMPLEMENT_DYNCREATE(CMy0330����ʵ��1��ͼ���̣�View, CView)

BEGIN_MESSAGE_MAP(CMy0330����ʵ��1��ͼ���̣�View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMy0330����ʵ��1��ͼ���̣�View::OnFileOpen)
END_MESSAGE_MAP()

// CMy0330����ʵ��1��ͼ���̣�View ����/����

CMy0330����ʵ��1��ͼ���̣�View::CMy0330����ʵ��1��ͼ���̣�View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0330����ʵ��1��ͼ���̣�View::~CMy0330����ʵ��1��ͼ���̣�View()
{
}

BOOL CMy0330����ʵ��1��ͼ���̣�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0330����ʵ��1��ͼ���̣�View ����

void CMy0330����ʵ��1��ͼ���̣�View::OnDraw(CDC* /*pDC*/)
{
	CMy0330����ʵ��1��ͼ���̣�Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0330����ʵ��1��ͼ���̣�View ��ӡ

BOOL CMy0330����ʵ��1��ͼ���̣�View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy0330����ʵ��1��ͼ���̣�View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy0330����ʵ��1��ͼ���̣�View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy0330����ʵ��1��ͼ���̣�View ���

#ifdef _DEBUG
void CMy0330����ʵ��1��ͼ���̣�View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0330����ʵ��1��ͼ���̣�View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0330����ʵ��1��ͼ���̣�Doc* CMy0330����ʵ��1��ͼ���̣�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0330����ʵ��1��ͼ���̣�Doc)));
	return (CMy0330����ʵ��1��ͼ���̣�Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0330����ʵ��1��ͼ���̣�View ��Ϣ�������


void CMy0330����ʵ��1��ͼ���̣�View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CFileDialog cfd(true);//trueΪ�򿪣�falseΪ���Ϊ
	int r = cfd.DoModal();  //�����Ի���
	if (r == IDOK) 
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
		dc.TextOutW(300, 300, filename);
	}
}
