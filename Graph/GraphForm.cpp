// GraphForm.cpp : implementation file
//

#include "pch.h"
#include "Graph.h"
#include "GraphForm.h"


// CGraphForm

IMPLEMENT_DYNCREATE(CGraphForm, CFormView)

CGraphForm::CGraphForm()
	: CFormView(IDD_GraphForm)
{

}

CGraphForm::~CGraphForm()
{
}

void CGraphForm::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CGraphForm, CFormView)
END_MESSAGE_MAP()


// CGraphForm diagnostics

#ifdef _DEBUG
void CGraphForm::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CGraphForm::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CGraphForm message handlers
