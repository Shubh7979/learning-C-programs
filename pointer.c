// pointer is a variable that holds the address of the variable
#include <stdio.h>

int main(){
//	int x=10,y,z;
//	printf("\n Address of x = %u",&x); //for memory address not value {6487628}
//	printf("\n Address of y = %u",&y);
//	printf("\n Address of z = %u",&z); //the diff betn them is 4 bytes
//	printf("\n value of x using pointer =%d",*(&x));
	
	int x=15;
	int *pr;
	
	pr =&x;
	
	printf("\n Address of x = %u",&x);
	printf("\n Address of pr = %u",pr);
	
	printf("\n value of x = %d",x);
	printf("\n value of pr = %d",*pr);
	
	*pr = 20;
	printf("\n value of x = %d",x);
	
	return 0;
}
