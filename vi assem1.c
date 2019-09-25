# #include <stdio.h>

int function(int a, int b)
{
  char buffer[10];
  a = a +b;
  return a;
}

int main()
{
  int c;
  c = function(1,2);
  return 0;
}
