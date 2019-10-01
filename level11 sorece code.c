#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )  /*인자값 ,인자 갯수*/
  /*  명령어                                 유형                          내용
      int main                            main 함수                 프로그램의 메인 함수
      (int argc,char *argv[])             매개 변수                 main 함수의 매개 변수
      argc                                argument counter         main 함수에 전달되는 인자 개수(첫번째 인자는 실행 파일 이름)
      argv                                argument value           main 함수에 전달되는 인자 값/내용
				                                  (vector)	               char 형 포인트 배열이므로 문자열로 받음*/
{
        char str[256]; // char 형으로 str 변수 선언 및 배열 크기 256byte 할당

        setreuid( 3092, 3092 ); // 다음 레벨 아이디
        strcpy( str, argv[1] ); // strcpy 함수에 의해서 'argv[1]'입력값을 str변수에 넣는다.(복사)
        printf( str );          // 포멧 스트링 인자 없이 변수를 인자로 지정함(포멧 스트링 버그 취약점 원인)
}


/*시스템 함수 주소값을 모르니까 찾고나서 system 함수를 추가로 넣는다.*/
