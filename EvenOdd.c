#include <stdio.h>
int isEven(int a){
	return (a%2==0);
}


int main (){
	int x;
	printf("Enter Number: ");
	scanf("%d",&x);
	if(isEven(x)){
		printf("Even");
	} else {
		printf("Odd");
	}

	return 0;
}
