#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char *env;

  env = getenv(argv[1]);  // getenv() 함수를 이용하여 인자의 환경 변수를 가져옴
  printf("SHELLCODE Address = %p\n",env);
}

// ex ) gcc -o shellcode shellcode.c
