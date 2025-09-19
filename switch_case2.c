#include <stdio.h>

int main(){
	char op;
	float a,b;
	printf("Enter first Number: ");
	scanf("%f",&a);
	printf("Enter Second Number: ");
	scanf("%f",&b);
	

	printf("OPERATION(+,-,/,*): ");
	scanf(" %c",&op);
	
	switch(op){
		case '+':printf("sum is %f",a+b);
			break;
		case '-':printf("sub is %f",a-b);
			break;
		case '/':printf("div is %f",a/b);
			break;
		case '*':printf("multi is %f",a*b);
			break;
		default:printf("Invalid");
			break;
	}
	
	
	return 0;
}
