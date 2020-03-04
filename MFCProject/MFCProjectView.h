
// MFCProjectView.h : CMFCProjectView ��Ľӿ�
//

#pragma once


class CMFCProjectView : public CView
{
protected: // �������л�����
	CMFCProjectView();
	DECLARE_DYNCREATE(CMFCProjectView)

// ����
public:
	CMFCProjectDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCProjectView();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCProjectView.cpp �еĵ��԰汾
inline CMFCProjectDoc* CMFCProjectView::GetDocument() const
   { return reinterpret_cast<CMFCProjectDoc*>(m_pDocument); }
#endif

