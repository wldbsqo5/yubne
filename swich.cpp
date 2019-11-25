#include <stdio.h>
#include <windows.h>
#pragma comment(lib, "user32")

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmd, int nCmd)
{
	int num1 = 3;

	switch (num1) {

	case 1:
		MessageBox(NULL, "num1 is 1", "switch 구문(case 1:)", MB_OK);
		break;
	case 2:
		MessageBox(NULL, "num1 is 2", "switch 구문(case 2:)", MB_OK);
		break;
	case 3:
		MessageBox(NULL, "num1 is 3", "switch 구문(case 3:)", MB_OK);
		break;
	default:
		MessageBox(NULL, "num1 is not 1,2,3", "switch 구문(default:)", MB_OK);
		break;
	}
	return 0;
}
