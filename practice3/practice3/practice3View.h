
// practice3View.h : Cpractice3View ��Ľӿ�
//

#pragma once


class Cpractice3View : public CView
{
protected: // �������л�����
	Cpractice3View();
	DECLARE_DYNCREATE(Cpractice3View)

// ����
public:
	Cpractice3Doc* GetDocument() const;

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
	virtual ~Cpractice3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // practice3View.cpp �еĵ��԰汾
inline Cpractice3Doc* Cpractice3View::GetDocument() const
   { return reinterpret_cast<Cpractice3Doc*>(m_pDocument); }
#endif

