
// 3��10��ʵ��4View.h : CMy3��10��ʵ��4View ��Ľӿ�
//

#pragma once


class CMy3��10��ʵ��4View : public CView
{
protected: // �������л�����
	CMy3��10��ʵ��4View();
	DECLARE_DYNCREATE(CMy3��10��ʵ��4View)

// ����
public:
	CMy3��10��ʵ��4Doc* GetDocument() const;

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
	virtual ~CMy3��10��ʵ��4View();
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

#ifndef _DEBUG  // 3��10��ʵ��4View.cpp �еĵ��԰汾
inline CMy3��10��ʵ��4Doc* CMy3��10��ʵ��4View::GetDocument() const
   { return reinterpret_cast<CMy3��10��ʵ��4Doc*>(m_pDocument); }
#endif

