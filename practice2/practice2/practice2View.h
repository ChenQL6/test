
// practice2View.h : Cpractice2View ��Ľӿ�
//

#pragma once


class Cpractice2View : public CView
{
protected: // �������л�����
	Cpractice2View();
	DECLARE_DYNCREATE(Cpractice2View)

// ����
public:
	Cpractice2Doc* GetDocument() const;

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
	virtual ~Cpractice2View();
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
};

#ifndef _DEBUG  // practice2View.cpp �еĵ��԰汾
inline Cpractice2Doc* Cpractice2View::GetDocument() const
   { return reinterpret_cast<Cpractice2Doc*>(m_pDocument); }
#endif

