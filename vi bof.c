#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

main(){

  char buf2[10];
  char buf[10];

  printf("It can be overflow : ");
  fgets(buf,40,stdin);

  printf("buf=0x%x,buf2=0x%x\n,buf,buf2");
  if ( strncmp(buf2, "go", 2) == 0 )
   {
        printf("Good Skill!\n");
        setreuid( 3010, 3010 );
        system("/bin/bash");
   }

}

printf("buf=0x%x,buf2=0x%x\n",buf,buf2); >> 추가
[level9@ftz tmp]$ gcc -o bof bof.c
[level9@ftz tmp]$ ./bof
It can be overflow : aaaa
buf=0xbfffdec0,buf2=0xbfffded0 << 추가하고나서의 정보 (buf 에서 buf2 까지의 거리)

[level9@ftz tmp]$ /usr/bin/bof
It can be overflow : aaaa
