#include<stdio.h>

int main(){
	int num[5] = {1,2,3,4,5};
	int sum = 0;
	int i; 
	int length = sizeof(num)/sizeof(num[0]);
	
	
	for(i=0;i<length;i++){
		 sum +=num[i];
	}
	printf("Sum of Array: %d",sum );
	
	return 0;
}
