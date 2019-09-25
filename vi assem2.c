main()
{


}






(gdb) disas main
Dump of assembler code for function main:
0x080482f4 <+0>:     push   %ebp
0x080482f5 <+1>:     mov    %esp,%ebp
0x080482f7 <+3>:     sub    $0x8,%esp
0x080482fa <+6>:     and    $0xfffffff0,%esp
0x080482fd <+9>:     mov    $0x0,%eax
0x08048302 <+14>:    sub    %eax,%esp
0x08048304 <+16>:    leave
0x08048305 <+17>:    ret
함수 프롤로그 , 에필로그 는 main 만해도 들어가는걸 보기위해 만듬
  
