
// 0330����ʵ��1��ͼ���̣�View.h : CMy0330����ʵ��1��ͼ���̣�View ��Ľӿ�
//

#pragma once


class CMy0330����ʵ��1��ͼ���̣�View : public CView
{
protected: // �������л�����
	CMy0330����ʵ��1��ͼ���̣�View();
	DECLARE_DYNCREATE(CMy0330����ʵ��1��ͼ���̣�View)

// ����
public:
	CMy0330����ʵ��1��ͼ���̣�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMy0330����ʵ��1��ͼ���̣�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 0330����ʵ��1��ͼ���̣�View.cpp �еĵ��԰汾
inline CMy0330����ʵ��1��ͼ���̣�Doc* CMy0330����ʵ��1��ͼ���̣�View::GetDocument() const
   { return reinterpret_cast<CMy0330����ʵ��1��ͼ���̣�Doc*>(m_pDocument); }
#endif

