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
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
					   // 그리기 메시지에 대해서는 CFrameWnd::OnPaint()을(를) 호출하지 마십시오.
}
