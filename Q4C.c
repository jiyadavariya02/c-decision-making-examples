#include<stdio.h>
int main()
{
float m;
printf("Enter Marks:");
scanf("%f",&m);
if(m>=35)
	{
		printf("Result: PASS");
	}
else
	{
		printf("Result: FAIL");
	}
return 0;
}