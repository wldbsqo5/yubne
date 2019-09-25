##include <stdio.h>

int main()
{
  int a = 10;
  printf("a: %d",a);
  return 0;

}


(gdb) disas main
Dump of assembler code for function main:
   0x08048328 <+0>:     push   %ebp
   0x08048329 <+1>:     mov    %esp,%ebp
   0x0804832b <+3>:     sub    $0x8,%esp
   0x0804832e <+6>:     and    $0xfffffff0,%esp
   0x08048331 <+9>:     mov    $0x0,%eax
   0x08048336 <+14>:    sub    %eax,%esp
   0x08048338 <+16>:    movl   $0xa,-0x4(%ebp)
   0x0804833f <+23>:    sub    $0x8,%esp
   0x08048342 <+26>:    pushl  -0x4(%ebp)
   0x08048345 <+29>:    push   $0x8048408
   0x0804834a <+34>:    call   0x8048268 <printf@plt>
   0x0804834f <+39>:    add    $0x10,%esp
   0x08048352 <+42>:    mov    $0x0,%eax
   0x08048357 <+47>:    leave
   0x08048358 <+48>:    ret

공간확보, 함수호출되엇을때 잘되엇는지 확인할것
