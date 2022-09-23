#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
   
    
    int x = fork();
  
  
    if (x > 0){
       printf("Going sleep\n");
        sleep(2);
  }
   
    else       {
    printf("BYE\n"); 
        exit(0);
        }
  
    return 0;
}
