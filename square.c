#include<stdio.h>
int sq(int);
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	
	sq(num);
	printf("%d is the square of number.",sq(num));
}
int sq(int n)
{
	return n*n;
}