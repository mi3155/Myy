#include<afxwin.h>
class CMainFrm : public CFrameWnd {
public:
	CMainFrm() {
		Create(NULL, L"Hi !");
	}
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};
class CMyApp : public CWinApp {
	BOOL InitInstance() {
		CMainFrm* Frm = new CMainFrm();
		m_pMainWnd = Frm;
		Frm->ShowWindow(1);
		return TRUE;
	}
};
CMyApp theApp; BEGIN_MESSAGE_MAP(CMainFrm, CFrameWnd)
ON_WM_PAINT()
END_MESSAGE_MAP()

#include<atlimage.h>
void CMainFrm::OnPaint()
{
	CImage img;
	CString str;
	CPaintDC dc(this);
	img.Load(L"p2.png");
	img.Draw(dc, 0, 0);
	//dc.Rectangle(10, 10, 100, 100);
						// device context for painting
					   // TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
					   // �׸��� �޽����� ���ؼ��� CFrameWnd::OnPaint()��(��) ȣ������ ���ʽÿ�.
}
