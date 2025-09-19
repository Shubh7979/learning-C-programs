#include <stdio.h>

int main(){
	int battery;
	printf("Enter your battery percentage:");
	scanf("%d",&battery);
	
	if(battery>5 && battery<21){
		printf("Battery is low, Please charge ");
	}
	else if(battery<=5){
		printf("Extremely low, Please Charge Soon");
	}
	else{
		printf("You are good to go");
	}
	
}
