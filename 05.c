#include<stdio.h>
int main()
{
 int op;
 float n1,n2;
 printf("**Calculator Menu**\n");
 printf("1)Addition\n");
 printf("2)Subtraction\n");
 printf("3)Multiplication\n");
 printf("4)Division\n");
 printf("Enter you choice:");
 scanf("%d",&op);
 printf("Enter two numbers:");
 scanf("%f %f",&n1,&n2);
 switch(op)
 	{
 	case 1:
 		printf("Addition=%2f",n1+n2);
		break;
 	case 2:
 		printf("Subtraction=%2f",n1-n2);
		break;
 	case 3:
 		printf("Multiplication=%2f",n1*n2);
		break;
	case 4:
		if(n2!=0)
		{
 		printf("Division=%2f",n1/n2);
 		}
		else
		{
		printf("Division by zero is not defined.");
		}	
		break;
	default:
		printf("Invalid Choice!");
	}
 return 0;
}
