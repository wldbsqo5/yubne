#include <stdlib.h>

main(int argc, char *argv[])
{
   long i=0x1234567;   /*스택가드 역활
                        long 형으로 i 변수 선언 및 '0x1234567'값(스택 가드 값)을 저장                  */
   char buf[1024];     // char 형으로 buf 변수 선언 및 1024byte 할당

   setreuid( 3094, 3094 );  // 다음 레벨
   if(argc > 1)             // argc로 넘겨받은 인자 값이 '1'개 이상이면, if 문을 수행함
   strcpy(buf,argv[1]);     // strcpy 함수에 의해서 buf 변수에 argv[1] 문자열을 복사함

   if(i != 0x1234567) {     // i 값이 '0x1234567'이 아니라(변경된다면), if 문을 수행함
   printf(" Warnning: Buffer Overflow !!! \n"); // 메세지 출력
   kill(0,11);         /*Linux = KILL-i = SIGSEGV
                         'SIGSEGV'시그널 발생 및 프로그램 실행 종료      */
   }
}
