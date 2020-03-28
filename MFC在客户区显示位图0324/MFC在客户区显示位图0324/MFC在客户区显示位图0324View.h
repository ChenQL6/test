
// MFC在客户区显示位图0324View.h : CMFC在客户区显示位图0324View 类的接口
//

#pragma once


class CMFC在客户区显示位图0324View : public CView
{
protected: // 仅从序列化创建
	CMFC在客户区显示位图0324View();
	DECLARE_DYNCREATE(CMFC在客户区显示位图0324View)

// 特性
public:
	CMFC在客户区显示位图0324Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMFC在客户区显示位图0324View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC在客户区显示位图0324View.cpp 中的调试版本
inline CMFC在客户区显示位图0324Doc* CMFC在客户区显示位图0324View::GetDocument() const
   { return reinterpret_cast<CMFC在客户区显示位图0324Doc*>(m_pDocument); }
#endif

