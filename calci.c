#include<stdio.h>

int main()
{
	int num1,num2,choice;
	char opt;
	
	do
	{
		printf("-----------Operations-----------\n");
		printf("1.Addition \n");
		printf("2.Substraction \n");
		printf("3.Multiplication \n");
		printf("4.Division \n");
		printf("5.Exit \n");
		printf("Enter your choice: \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			printf("Enter first number: \n");
			scanf("%d",&num1);	
			printf("Enter second number: \n");
			scanf("%d",&num2);
			printf("Addition:%d \n",num1+num2);
			break;
			
			case 2:
			printf("Enter first number: \n");
			scanf("%d",&num1);	
			printf("Enter second number: \n");
			scanf("%d",&num2);
			printf("Substraction:%d \n",num1-num2);
			break;
			
			case 3:
			printf("Enter first number: \n");
			scanf("%d",&num1);	
			printf("Enter second number: \n");
			scanf("%d",&num2);
			printf("Multiplication:%d \n",num1*num2);
			break;
			
			case 4:
			printf("Enter first number: \n");
			scanf("%d",&num1);	
			printf("Enter second number: \n");
			scanf("%d",&num2);
			printf("Division:%d \n",num1/num2);
			break;
			
			case 5:
			printf("Exit \n");
			break;
			
			default:
			printf("Invalid Choice \n");
		}
		if(choice!=0)
		{
			printf("Do you want to continue? (y/n) \n");
			scanf(" %c",&opt);
		}
		else
		{
			printf("Invalid Option \n");
		}
	}while(opt=='y');
	
	return 0;
}
