#include<stdio.h>
#include <unistd.h>
#include<sys/wait.h>
  
int main(){
 
    int pid=fork();
  
    if(pid > 0){
        printf("in parent process\n");
  		wait(NULL);
  		sleep(1);
  	}
  
    else if(pid==0)
    {
        sleep(9);
        printf("in child process\n");
    }
  
    return 0;
}
