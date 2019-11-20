#include <windows.h>

BYTE b = 0x12;
WORD w = 0x1234;
DWORD dw = 0x12345678;
char str[6] = "abcde";

int main(int argc, char * argv[]){
    BYTE ib = b;
    WORD iw = w;
    DWORD ldw = dw;
    char *lstr = str;
}
