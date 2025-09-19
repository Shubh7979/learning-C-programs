#include <stdio.h>

int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age<=5){
		printf("Ticket is Free");
		
	} 
	else if(age>5 && age<60){
		printf("Full Ticket");
	}
	else if(age>60 && age<75){
		printf("half Ticket");
	}
	else{
		printf("Free ticket");
	}
}
