#include<stdio.h>

int main(){
	int battery = 100; //initialization
	while (battery>=0){
		printf("Battery: %d\n",battery);
		battery-=10;
	}
	printf("Battery is dead");
	
	return 0;
}
