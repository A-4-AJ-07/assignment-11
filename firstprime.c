#include<stdio.h>
int firstprime(int);
int main()
{
	int n;
	printf("Enter the number of terms for prime number:");
	scanf("%d",&n);
	
	firstprime(n);
}
int firstprime(int N)
{   
     int count=1,flag,num=2,i;
	while(count<=N)
	{    flag=0;
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
			   flag=1;
			   break;
		      }
		      
		}
		if(flag==0)
		{
		printf("%d\t",num);
		count++;
		}
		num++;
	}
}