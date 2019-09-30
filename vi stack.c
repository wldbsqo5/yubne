##include <stdio.h>

int sum1;
int sum2;
int sum3;

int main()
{
      char buf1[7];
        char buf2[7];
            return 0;
}



[level9@ftz tmp]$ gdb -q stack

(gdb) disas main

   0x080482f4 <+0>:     push   %ebp
   0x080482f5 <+1>:     mov    %esp,%ebp
   0x080482f7 <+3>:     sub    $0x28,%esp
   0x080482fa <+6>:     and    $0xfffffff0,%esp
   0x080482fd <+9>:     mov    $0x0,%eax
   0x08048302 <+14>:    sub    %eax,%esp
   0x08048304 <+16>:    mov    $0x0,%eax
   0x08048309 <+21>:    leave
   0x0804830a <+22>:    ret 
