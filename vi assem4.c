##include <stdio.h>

void sub() {
    int c =20;
    int d =40;
}
int main() {
    sub();
    int a =10;
    int b =30;
    return 0;
}

(gdb) disas main
Dump of assembler code for function main:
0x0804830a <+0>:     push   %ebp
0x0804830b <+1>:     mov    %esp,%ebp
0x0804830d <+3>:     sub    $0x8,%esp
0x08048310 <+6>:     and    $0xfffffff0,%esp
0x08048313 <+9>:     mov    $0x0,%eax
0x08048318 <+14>:    sub    %eax,%esp
0x0804831a <+16>:    call   0x80482f4 <sub>
0x0804831f <+21>:    movl   $0xa,-0x4(%ebp)
0x08048326 <+28>:    movl   $0x1e,-0x8(%ebp)
0x0804832d <+35>:    mov    $0x0,%eax
0x08048332 <+40>:    leave
0x08048333 <+41>:    ret 
