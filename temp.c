#include <stdio.h>

int main(){
	int temp;
	printf("Enter Temperature: ");
	scanf("%d", &temp);
	
	if (temp>50){
		printf("Temperature is very hot");
	}
	else if(temp>=40 && temp<=50){
		printf("Temperature is hot");
	}
	else if (temp>24 && temp<40){
		printf("Temperature is moderate");
	}
	else if (temp>10 && temp<25){
		printf("Temperature is cold");
	}
	else{
		printf("temperature is very cold");
	}
}
