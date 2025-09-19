#include <stdio.h>

int main (){
	int ticket,idProof,luggage;
	
	printf("do you have ticket? (yes = 1, no = 0): ");
	scanf("%d", &ticket);
	
	if(ticket==1){
		printf("Do you have idProof? (yes = 1, no = 0): ");
		scanf("%d", &idProof);
		
		if(idProof==1){
			printf("Is your Luggage under 20kg? (yes = 1, no = 0):");
			scanf("%d", &luggage);
			
			if(luggage==1){
				printf("You may Enter!!");
			}
			else{
				printf("Extra luggage charges may apply.");
			}
			
		}
		else{
			printf("please provide idProof");
		}
	}
	else{
		printf("You are not permitted entry");
	}
	
	return 0;
}
