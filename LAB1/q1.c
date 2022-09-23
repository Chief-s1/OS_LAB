#include<stdio.h>
#include<unistd.h>

int main(void)
{

 int pid;
    pid = fork();
   
        printf("\nParent Process id :%d\n ",getpid() );
        printf("\nChild Process with parent id :%d\n ",getppid() );
    


}
