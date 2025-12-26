//pointer to pointer 
#include <stdio.h>

int main (){
	int a= 10; //normal variable
	int *p =&a;		//pointer to int
	int **q =&p;		//pointer to pointer
	

	
	printf("\n Value of a = %d",a);//10
	
	printf("\n Address of a = %u",&a); //6487620
	
	printf("\n p stores =%u (Address of a)",p); //6487620
	
	printf("\n *p (Value at p) = %d",*p);//10
	
	printf("\n q stores =%u (Address of p)",q);//6487620
	
	printf("\n *q (values at q) = %d",*q);//6487620
	
	printf("\n *q (values at q) = %d",**q);
	
	return 0;
}
