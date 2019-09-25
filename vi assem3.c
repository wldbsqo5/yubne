##include <stdio.h>

int main()
{
    int a = 10;
    int b = 30;
    return 0;
}


(gdb) disas main
Dump of assembler code for function main:
0x080482f4 <+0>:     push   %ebp
0x080482f5 <+1>:     mov    %esp,%ebp              - 프롤로그
0x080482f7 <+3>:     sub    $0x8,%esp              - 8만큼 이동
0x080482fa <+6>:     and    $0xfffffff0,%esp
0x080482fd <+9>:     mov    $0x0,%eax
0x08048302 <+14>:    sub    %eax,%esp
0x08048304 <+16>:    movl   $0xa,-0x4(%ebp)        - -4만큼 이동
0x0804830b <+23>:    movl   $0x1e,-0x8(%ebp)       - -8만큼 이동
0x08048312 <+30>:    mov    $0x0,%eax              -  0만큼 이동
0x08048317 <+35>:    leave
0x08048318 <+36>:    ret   
