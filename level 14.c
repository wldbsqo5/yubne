#include <stdio.h>
#include <unistd.h>

main()
{ int crap;               //int 형으로 crap 변수 선언
  int check;              //int 형으로 check 변수 선언
  char buf[20];           //char 형으로 buf 변수 선언 및 20byte 할당
  fgets(buf,45,stdin);    /*입력받은 문자열의 길이를 확인하지 않기 때문에 BoF에 취약점 함수
                            fgets 함수에 의해서 buf 입력(20byte)을 받지만, 45byte를 받기 때문에 BoF 발생 가능      */

  if (check==0xdeadbeef)  //if 문을 통해서 check 변수 값이 '0xdeadbeef'인 경우, 다음 레벨 권한 상승 실시
   {
     setreuid(3095,3095);
     system("/bin/sh");
   }
}
