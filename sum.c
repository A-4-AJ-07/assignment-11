#include<stdio.h>
int sum();
int factorial(int);
int main()
{    printf("sum of given series\n");
	printf("1!/1+2!/2+3!/3+4!/4+5!/5=");
    sum(); 	
}
int sum()
{
	int sum=factorial(1)/1+factorial(2)/2+factorial(3)/3+factorial(4)/4+factorial(5)/5;
	printf("%d",sum);
}
int factorial(int f)
{   int fac=1;
	while(f>0)
	{
		fac=fac*f;
		f--;
	}
	return fac;
}