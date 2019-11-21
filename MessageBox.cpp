#include <stdio.h>
#include <windows.h>
#pragma comment(lib, "user32")

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmd, int nCmd)
{
	int num1 = 6;
	int num2 = 6;

	if(num1!=num2) {
	MessageBox(NULL, "Operand1 != Operand2(ZF=0) -> Next Code", "JE 명령어(점프X)", MB_OK);
	} else {
	MessageBox(NULL, "Operand1 == Operand2(ZF=1) -> Jump", "JE 명령어(점프O)", MB_OK);
	}
	return 0;
}
/*cl MessageBox.cpp /link /debug /opt:icf,ref*/
