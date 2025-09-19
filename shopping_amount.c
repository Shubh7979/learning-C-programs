#include <stdio.h>

int main(){
	int amount;
	printf("Enter your amount");
	scanf("%D",&amount);
	
	if(amount>499){
		printf("congrats you get free delivery: ");
	}
	
	else{
		printf("Delivery charges will be applicable");
		
	}
}
