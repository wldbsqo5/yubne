[참고] ExecuteMe 소스 코드

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {

        char cmd[30];
        system("/usr/bin/clear");
        chdir("/home/level2");
        printf("\n\n\n\t\t레벨2의 권한으로 당신이 원하는 명령어를\n");
        printf("\t\t한가지 실행시켜 드리겠습니다.\n");
        printf("\t\t(단, my-pass 와 chmod는 제외)\n");
        printf("\n\t\t어떤 명령을 실행시키겠습니까?\n");
        printf("\n\n\t\t[level2@ftz level2]$ ");
        fgets(cmd, 30, stdin);
        if( strstr( cmd, "my-pass") != 0 ){
                printf("\n\t\tmy-pass 명령은 사용할 수 없습니다.\n\n");
                exit(0);
                }
        if( strstr( cmd, "chmod") != 0 ) {
                printf("\n\t\tchmod 명령은 사용할 수 없습니다.\n\n");
                exit(0);
        }
        printf("\n\n");
        setreuid( 3002, 3002 );
        system(cmd);
}
