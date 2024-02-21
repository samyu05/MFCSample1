#include<afxwin.h>
//first global object will be created
myapp obj;

int __stdcall AfxWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR nCmdLine, int nCmdShow)
{
	//reads global object address(CWinApp derived class)
	CWinApp* pApp = AfxGetApp();

	//copies WinMain parameters to CWinApp global object
	AfxwinInit(hInstance, hPrevInstance, nCmdLine, nCmdShow);
	pApp->InitApplication();

	//InitInstance will launch the Main Window
	if (!pApp->InitInstance())
		pApp->ExitInstance();

	//starts message loop
	pApp->Run();
}