#include <stdio.h>
int func(int num1, int num2)
{
  return num1+num2;
}
int main()
{
func(6,2);
return 0;
}

/*cl func.cpp /link /debug /opt:icf,ref*/
