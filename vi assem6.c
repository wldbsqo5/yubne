##include <stdio.h>

int main()
{
    int c;
    c = function(1,2);
}

int function(int a, int b)
{
    char buffer[10];
    a = a + b;
    return a;

}


[level1@localhost tmp]$ cat assem6.a
        .file   "assem6.c"
        .text
.globl main
        .type   main,@function
main:
        pushl   %ebp
        movl    %esp, %ebp
        subl    $4, %esp
        pushl   $2
        pushl   $1
        call    function
        addl    $8, %esp
        movl    %eax, -4(%ebp)
        leave
        ret
.Lfe1:
        .size   main,.Lfe1-main
.globl function
        .type   function,@function
function:
        pushl   %ebp
        movl    %esp, %ebp
        subl    $16, %esp
        movl    12(%ebp), %eax
        addl    %eax, 8(%ebp)
        movl    8(%ebp), %eax
        leave
        ret


        [level1@localhost tmp]$ cat assem6.a
                .file   "assem6.c"
                .text
        .globl main
                .type   main,@function
        main:
                pushl   %ebp
                movl    %esp, %ebp
                subl    $4, %esp
                pushl   $2
                pushl   $1
                call    function
                addl    $8, %esp
                movl    %eax, -4(%ebp)
                leave
                ret
        .Lfe1:
                .size   main,.Lfe1-main
        .globl function
                .type   function,@function
        function:
                pushl   %ebp
                movl    %esp, %ebp
                subl    $16, %esp
                movl    12(%ebp), %eax
                addl    %eax, 8(%ebp)
                movl    8(%ebp), %eax
                leave
                ret

                [level1@localhost tmp]$ cat assem6.a
                        .file   "assem6.c"
                        .text
                .globl main
                        .type   main,@function
                main:
                        pushl   %ebp
                        movl    %esp, %ebp
                        subl    $4, %esp
                        pushl   $2
                        pushl   $1
                        call    function
                        addl    $8, %esp
                        movl    %eax, -4(%ebp)
                        leave
                        ret
                .Lfe1:
                        .size   main,.Lfe1-main
                .globl function
                        .type   function,@function
                function:
                        pushl   %ebp
                        movl    %esp, %ebp
                        subl    $16, %esp
                        movl    12(%ebp), %eax
                        addl    %eax, 8(%ebp)
                        movl    8(%ebp), %eax
                        leave
                        ret



                        [level1@localhost tmp]$ cat assem6.a
                                .file   "assem6.c"
                                .text
                        .globl main
                                .type   main,@function
                        main:
                                pushl   %ebp
                                movl    %esp, %ebp
                                subl    $4, %esp
                                pushl   $2
                                pushl   $1
                                call    function
                                addl    $8, %esp
                                movl    %eax, -4(%ebp)
                                leave
                                ret
                        .Lfe1:
                                .size   main,.Lfe1-main
                        .globl function
                                .type   function,@function
                        function:
                                pushl   %ebp
                                movl    %esp, %ebp
                                subl    $16, %esp
                                movl    12(%ebp), %eax
                                addl    %eax, 8(%ebp)
                                movl    8(%ebp), %eax
                                leave
                                ret


                                [level1@localhost tmp]$ cat assem6.a
              .file   "assem6.c"
              .text
      .globl main
              .type   main,@function
      main:
              pushl   %ebp
              movl    %esp, %ebp
              subl    $4, %esp
              pushl   $2
              pushl   $1
              call    function
              addl    $8, %esp
              movl    %eax, -4(%ebp)
              leave
              ret
      .Lfe1:
              .size   main,.Lfe1-main
      .globl function
              .type   function,@function
      function:
              pushl   %ebp
              movl    %esp, %ebp
              subl    $16, %esp
              movl    12(%ebp), %eax
              addl    %eax, 8(%ebp)
              movl    8(%ebp), %eax
              leave
              ret
