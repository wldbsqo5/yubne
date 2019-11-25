#include <stdio.h>
#include <windows.h>
#pragma comment(lib, "user32")

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmd, int nCmd)
{
    int num1 = 0;
    char str[24];

    while (num1<5) {
      num1++;
      sprintf(str, "Loop Count = %d Time",num1);
      MessageBox(NULL, str, "while 구문", MB_OK);

    }
    return 0;
}
