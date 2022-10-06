#include<stdio.h>

typedef struct Processes{
int at;
int bt;
int ct, rt, st ,tat,wt;
int at2;
}process;

int main(void)
{
int n ;
printf("Enter Number of processews\n");
scanf("%d",&n);

process p[n];

   for(int i=0;i<n ;i++)
   {
      printf("Enter Process %d arrival Time and Burst Time\n",(i+1));
      scanf("%d%d",&p[i].at,&p[i].bt);
      p[i].at2=p[i].at;
   }

   int k =0,mn=p[0].at;
   int pos, tim=0 , diff;

   while (k < n)
   {
      for(int i =0 ;i<n ;i++)
      {
         if(mn> p[i].at && p[i].at != -1)
         {
            mn = p[i].at;
            pos=i;
         }
      }
      //mn contains the process with minimum arrival time, pos contains that process position
      p[pos].at=-1;

      if(tim>=mn)  
      {    
      p[pos].st=tim;
      }

   else
   {
      diff=mn-tim;
      tim+=diff;
       p[pos].st=tim;
        
   }


      p[pos].ct=p[pos].bt + tim;
      tim+=p[pos].bt;
      p[pos].rt=p[pos].st - mn; // mn = arrival time
      p[pos].tat=p[pos].ct - mn;

      p[pos].wt=p[pos].tat- p[pos].bt;


      mn=99999;
      k++;
   }

   printf("Process\tAT\tBT\tST\tCT\tRT\tTAT\tWT\n");

   for(int i=0;i<n;i++)
   {
printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",(i+1),p[i].at2, p[i].bt, p[i].st, p[i].ct, p[i].rt, p[i].tat, p[i].wt );
   }




}
