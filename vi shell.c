#include <stdio.h>

int main()
{
  long shell = 0x4203f2c0;
  /* shell 변수에 system 함수 주소 대입*/

  while(memcmp((void *)shell, "/bin/sh", 8)){
    ++shell;
  }
  /* memcmp 함수 : 메모리 주소 비교 함수
     memcmp 함수를 이용하여 shell 변수 주소부터 시작해서 '/bin/sh' 문자열을 찾을 때 까지
     shell 변수 값을 증가시키는 반복문 */
  printf("/bin/sh = %p\n",shell);
  /* '/bin/sh'문자열과 매칭되는 shell 변수의 주소 값을 출력 */

}
