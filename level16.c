#include <stdio.h>

void shell() {                  //shell 함수 선언 및 권한상승/쉘 획득 실시
  setreuid(3097,3097);
  system("/bin/sh");
}

void printit() {
  printf("Hello there!\n");
}

main()
{ int crap;
  void (*call)()=printit;       //printit 함수를 call 포인터 함수에 대입
  char buf[20];                 //char 형으로 buf변수 선언 및 배열 크기 20byte 할당
  fgets(buf,48,stdin);          //fgets 함수에 의해서 사용자 입력 48byte 만큼 입력 받음
  call();                       /*함수 포인터 call 함수를 이용하여 printit 함수 호출 실시 <-- shell 함수로 변경하면 BoF 가능
                                  [ebp-0x10]    */
}
