
// MFC��һ��ʵ��2Doc.h : CMFC��һ��ʵ��2Doc ��Ľӿ�
//


#pragma once


class CMFC��һ��ʵ��2Doc : public CDocument
{
protected: // �������л�����
	CMFC��һ��ʵ��2Doc();
	DECLARE_DYNCREATE(CMFC��һ��ʵ��2Doc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFC��һ��ʵ��2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString s = _T("���ǳ�����");
	CString A;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
