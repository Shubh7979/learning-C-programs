#include <stdio.h>

int main(){
	int place,food,pay;
	
	printf("is the restaurant open (yes = 1, no = 0)");
	scanf("%d", &place);
	
	if(place==1){
		printf("is the food ready (yes = 1, no = 0)");
		scanf("%d", &food);
		
		if(food==1){
			printf("is the payment successful (yes = 1, no = 0)");
			scanf("%d", &pay);
			
			if(pay==1){
				printf("Your order is complete");
				
			}
			else{
				printf("you need to pay. ");
			}
		}
		else{
			printf("wait a little longer to get the food ready");
		}
	}
	else{
		printf("restaurant is closed, look somewhere else");
	}
}
