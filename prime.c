#include<stdio.h>
int prime(int);
int main()
{
	int num;
	printf("Enter a number for prime:");
	scanf("%d",&num);
	
	int flag=prime(num);
	if(flag==0)
	printf("%d is a prime number.",num);
	else
	printf("%d is not a prime number.",num);
}
int prime(int n)
{
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		else
		flag=0;
	}
	return flag;
}