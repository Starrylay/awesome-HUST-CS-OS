#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    // 调用copy
    printf("调用copy\n");
    long int callreturn = syscall(327,argv[1],argv[2]);
    printf("系统调用返回值为 %ld \n", callreturn);
    return 0;
}
