#include<stdio.h>
int nextprime(int );
int main()
{
	int p,num;
	printf("Enter the number for next  prime:");
	scanf("%d",&num);
	p=nextprime(num);
	printf("Next prime number is %d",p);
}
int nextprime(int n)
{
	int i,j,flag=0;

	for(i=n+1;i<=n+100;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
		
		return i;
			break;
		}
	}
}