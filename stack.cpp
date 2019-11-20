#include <stdio.h>
int add(int a, int b)
{
    int x = a, y= b;
    return (x + y);

}
int main(int argc, char* argv[])
{
    int a =6 , b = 2;
    printf("%d\n",add(a,b));
    return 0;

}

/*c 파일안에 소스파일에 cpp로 새로만들기*/
