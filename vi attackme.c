#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
        char str[256];

        setreuid( 3092, 3092 );
        strcpy( str, argv[1] );
        printf( str );
        return 0;
}

/*
  [level11@ftz tmp]$ gcc -S -o attackme.a attackme.c
  [level11@ftz tmp]$ gdb -q attackme

  (gdb) b*main
  Breakpoint 1 at 0x8048470

  (gdb) run

  Breakpoint 1, 0x08048470 in main () */
