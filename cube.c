#include <stdio.h>

int Cube(){
	int a=15;
	return a*a*a;
}

int SqRoot(){
	int b = 100;
	int i;
	for (i=0;i*i<=b;i++){  //if we are using <= then i-1 is required 
		
	}
	return i-1; 
}

int main(){
	
	printf("Cube is %d",Cube());
	printf("Square root is %d",SqRoot());
	return 0;
}
