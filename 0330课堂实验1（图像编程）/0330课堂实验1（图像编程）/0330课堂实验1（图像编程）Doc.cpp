
// 0330����ʵ��1��ͼ���̣�Doc.cpp : CMy0330����ʵ��1��ͼ���̣�Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0330����ʵ��1��ͼ���̣�.h"
#endif

#include "0330����ʵ��1��ͼ���̣�Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMy0330����ʵ��1��ͼ���̣�Doc

IMPLEMENT_DYNCREATE(CMy0330����ʵ��1��ͼ���̣�Doc, CDocument)

BEGIN_MESSAGE_MAP(CMy0330����ʵ��1��ͼ���̣�Doc, CDocument)
END_MESSAGE_MAP()


// CMy0330����ʵ��1��ͼ���̣�Doc ����/����

CMy0330����ʵ��1��ͼ���̣�Doc::CMy0330����ʵ��1��ͼ���̣�Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CMy0330����ʵ��1��ͼ���̣�Doc::~CMy0330����ʵ��1��ͼ���̣�Doc()
{
}

BOOL CMy0330����ʵ��1��ͼ���̣�Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMy0330����ʵ��1��ͼ���̣�Doc ���л�

void CMy0330����ʵ��1��ͼ���̣�Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CMy0330����ʵ��1��ͼ���̣�Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CMy0330����ʵ��1��ͼ���̣�Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMy0330����ʵ��1��ͼ���̣�Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CMy0330����ʵ��1��ͼ���̣�Doc ���

#ifdef _DEBUG
void CMy0330����ʵ��1��ͼ���̣�Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy0330����ʵ��1��ͼ���̣�Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMy0330����ʵ��1��ͼ���̣�Doc ����
