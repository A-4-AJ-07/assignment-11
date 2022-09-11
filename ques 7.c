#include<stdio.h>
int fibbo(int);
int main()
{
	int n;
	printf("Enter the number of terms in series:");
	scanf("%d",&n);
	
	fibbo(n);
}
int fibbo(int N)
{
	int temp,first,second,third,count;
	
	
	
	first=0,second=1;
	count=1;
	printf("%d\t",first);
	printf("%d\t",second);
	while(count<=N-2)
	{   
	    third=first+second;
		
		printf("%d\t",third);
		first=second;
		second=third;
		count++;		
	}
	
}