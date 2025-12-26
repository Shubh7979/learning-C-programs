#include<stdio.h>

int main(){
	int arr[6] = {10,20,30,40,50,60};
	
	int *p,i;
	
	p=arr;
	
	printf("First Element = %d \n",*p);
	printf(" \n");
	
	for(i=0;i<6;i++){
		printf("%d Element = %d \n",i+1,*(p+i));
	}
}
