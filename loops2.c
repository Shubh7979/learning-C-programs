#include <stdio.h>

int main(){
	int i;
	int a;
	printf("Enter a number for multiplication: ");
	scanf("%d", &a);
	
	for (i=1;i<=10;i++){
		printf("%d into %d is %d \n",a,i,a*i);
	}
	
	
	
}
