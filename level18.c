#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
void shellout(void);
int main()
{
  char string[100];                                                                             // char 형으로 staring 변수 선언 및 100byte 할당
  int check;                                                                                    // int 형으로 check 변수 선언
  int x = 0;                                                                                    // int 형으로 x 변수 선언
  int count = 0;                                                                                // int 형으로 count 변수 선언
  fd_set fds;                                                                                   // 구조체
  printf("Enter your command: ");
  fflush(stdout);   //새로고침 이라는뜻 , stdout에 지정된 출력 스트림 관련 버퍼를 초기화
  while(1)          //무한반복을 위한 (1) , 무한 루프
    {
      if(count >= 100)                                                                          // count 값이 100이거나 크면
        printf("what are you trying to do?\n");
      if(check == 0xdeadbeef)
        shellout();
      else
        {
          FD_ZERO(&fds);
          FD_SET(STDIN_FILENO,&fds);

          if(select(FD_SETSIZE, &fds, NULL, NULL, NULL) >= 1)
            {
              if(FD_ISSET(fileno(stdin),&fds))
                {
                  read(fileno(stdin),&x,1);     // stdin 입력을 1byte 씩 받아서 x의 주소에 저장함
                  switch(x)
                    {
                      case '\r':
                      case '\n':                // x 값이 '\r','\n'이면, '\a'실시
                        printf("\a");
                        break;
                      case 0x08:                // x 값이 0x08 이면, count 값을 감소하고 \b \b 실시(백스페이스 2번)
                        count--;
                        printf("\b \b");
                        break;
                      default:                  // x 값이 위의 값이 아니라면, string 배열에 count 넣고 증가
                        string[count] = x;
                        count++;
                        break;
                    }
                }
            }
        }
    }
}

void shellout(void)
{
  setreuid(3099,3099);
  execl("/bin/sh","sh",NULL);
}
