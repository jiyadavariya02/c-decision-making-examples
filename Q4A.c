#include<stdio.h>
int main()
{
int n;
printf("Enter the Number:");
scanf("%d",&n);
if(n>0)
	{
		printf("%d is a positive number.",n);
	}
if(n<0)
	{
		printf("%d is a negative number.",n);
	}
if(n==0)
	{printf("%d is zero.",n);
	}
return 0;
}