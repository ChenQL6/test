
// MFCProjectDoc.h : CMFCProjectDoc ��Ľӿ�
//


#pragma once


class CMFCProjectDoc : public CDocument
{
protected: // �������л�����
	CMFCProjectDoc();
	DECLARE_DYNCREATE(CMFCProjectDoc)

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
	virtual ~CMFCProjectDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	//CString s = _T("���ǳ�����");
	//int a = 1;
	//CString A;
	CString COUNT;
	int count;
	

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
