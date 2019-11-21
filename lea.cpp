#include <stdio.h>

int main()
{
  int num1 =6;
  int *num2 = &num1;
  return 0;

}

/*cl lea.cpp /link /debug /opt:icf,ref*/
