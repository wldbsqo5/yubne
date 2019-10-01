#include <stdio.h>
#include <stdlib.h>

int int main(int argc, char *argv[]) {
  char buf[20];

  strcpy(buf,argv[1]);
  printf(buf);
}

/*포맷 스트링 버그가 생기면 나타는 취약점
ex )
[level11@ftz tmp]$ ./fsb2 "%x %x %x %x"
bffffc21 42015481 80482da 25207825
[level11@ftz tmp]$ ./fsb2 "aaaa %08x %08x %08x %08x"
aaaa bffffc14 42015481 080482da 61616161*/
