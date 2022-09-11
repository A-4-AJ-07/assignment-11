#include<stdio.h>
int prime(int ,int );
int main()
{
	int n1,n2;
   printf("Initial number for prime: ");
   scanf("%d",&n1);
   
   printf("final number for prime: ");
   scanf("%d",&n2);
   
   prime(n1,n2);
}
int prime(int num1,int num2)
{     
     int num,i,flag;
	for(num=num1+1;num<num2-1;num++)
   {  
      flag=0;
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
		}
   }
}