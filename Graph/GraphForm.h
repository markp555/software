#pragma once



// CGraphForm form view

class CGraphForm : public CFormView
{
	DECLARE_DYNCREATE(CGraphForm)

protected:
	CGraphForm();           // protected constructor used by dynamic creation
	virtual ~CGraphForm();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GraphForm };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};


