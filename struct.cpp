#include <stdio.h>

struct num {
  int num1;
  int num2;
  int num3;

};
int main()
{
  struct num st;
  st.num1 = 6;
  st.num2 = 2;
  st.num3 = 8;

  printf("%x, %x, %n\n", st.num1, st.num2, st.num3);
  return 0;
}
/*cl struct.cpp /link /debug /opt:icf,ref*/
