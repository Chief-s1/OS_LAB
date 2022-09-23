#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){

	int arr[]={1,2,3,4,5,6,7,8};
	int se=0,so=0;
		
		int n = sizeof(arr)/sizeof(int);

	int x = fork();
	
	if(x == 0)
	{
		for(int i=0;i<n;i++)	
		{
			if(arr[i]%2==0)
			se+=arr[i];
		}	
		printf("Even sum:%d\n",se);
	}
	else
	{
	for(int i=0;i<n;i++)	
		{
			if(arr[i]%2==1)
			so+=arr[i];
		}
		printf("Odd sun:%d\n",so);
		
	}	

}
