#include<stdio.h>
int comb(int ,int );
int factorial(int );
int main()
{    int i,j,k,line,r;
     printf("Enter the number of line:");
     scanf("%d",&line);
	 for(i=1;i<=line;i++)
	 {
	 	k=1,r=0;
	 	for(j=1;j<=2*line-1;j++)
	 	{
	 		if(j>=line+1-i&&j<=line-1+i&&k)
	 		{
	 			printf("%d",comb(i-1,r));
	 			k=0; r++;
			 }
			 else
			 {
			 	printf("  ");
			 	k=1;
			 }
		 }
		 printf("\n");
	 }
}
int comb(int a,int b)
{
	int f1=factorial(a);
	int f2=factorial(b);
	int f3=factorial(a-b);
	return f1/f2/f3;
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