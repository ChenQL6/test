
// ʵ��3.1View.h : Cʵ��31View ��Ľӿ�
//

#pragma once


class Cʵ��31View : public CView
{
protected: // �������л�����
	Cʵ��31View();
	DECLARE_DYNCREATE(Cʵ��31View)

// ����
public:
	Cʵ��31Doc* GetDocument() const;

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
	virtual ~Cʵ��31View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ʵ��3.1View.cpp �еĵ��԰汾
inline Cʵ��31Doc* Cʵ��31View::GetDocument() const
   { return reinterpret_cast<Cʵ��31Doc*>(m_pDocument); }
#endif

