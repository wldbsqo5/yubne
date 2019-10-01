##include <stdio.h>

int main(int argc, char *argv[]){

  int i;
  printf("argc: %d\n",argc);

  for (i=0; i<argc; i++) 
    printf("argv[%d]: %s\n",i,argv[i]);
    return 0;
  }


[level11@ftz tmp]$ gcc -o arg arg.c
[level11@ftz tmp]$ ./arg 1 2 3 4 5
argc: 6
argv[0]: ./arg
argv[1]: 1
argv[2]: 2
argv[3]: 3
argv[4]: 4
argv[5]: 5
