
// practice4View.h : Cpractice4View ��Ľӿ�
//

#pragma once


class Cpractice4View : public CView
{
protected: // �������л�����
	Cpractice4View();
	DECLARE_DYNCREATE(Cpractice4View)

// ����
public:
	Cpractice4Doc* GetDocument() const;

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
	virtual ~Cpractice4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // practice4View.cpp �еĵ��԰汾
inline Cpractice4Doc* Cpractice4View::GetDocument() const
   { return reinterpret_cast<Cpractice4Doc*>(m_pDocument); }
#endif

