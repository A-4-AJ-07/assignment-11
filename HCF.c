#include<stdio.h>
int LCM(int ,int);
int main()
{
	int n1,n2,total;
	printf("Enter the two numbers for LCM:");
	scanf("%d%d",&n1,&n2);
	
	total=LCM(n1,n2);
	int HCF=n1*n2/total;
	printf("%d is the HCF of two numbers",HCF);
	
}
int LCM(int num1,int num2)
{
	int max,lcm;
	if(num1>num2)
	{   max=num1;
		while(1)
		{
			if(max%num1==0&&max%num2==0)
			{
			  lcm=max;
			  break;
			 }
			 max++;
		}
		}
	
	if(num1<num2)
	{   max=num2;
		while(1)
		{
			if(max%num1==0&&max%num2==0)
			{
			  lcm=max;
			  break;
			 }
			 max++;
		}
		}
	return lcm;
}