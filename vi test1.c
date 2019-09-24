#include <stdio.h>
#include <stdlib.h>                     /*헤더 Text*/

int retVal = 0;                         /*전역 변수//*data*/
int outVal;                             /*BSS*/

int main()                              /*Text*/
{

char string[] = "test1";                /*char 자료형을 이용하여 string 변수에 'test1' 문자열 할당 stack*/
char *ptr;                              /*char 자료형의 ptr 변수(*: 주소 저장변수) stack*/
static int output = 1;                  /*정적 int 자료형 변수 data*/

ptr = (char *)malloc(sizeof(string));   /*ptr 포인터 변수에 동적 힙 메모리 주소 할당 heap*/

printf("%s\n",string);                  /*'string'변수 값을 printf 함수를 이용하여 출력 Text*/
return retVal;                          /*text*/

/*일부러 이렇게 설정한거지 무슨 프로그램을 짠건아니다.*/
/*세그먼트(영역) 확인할것*/
