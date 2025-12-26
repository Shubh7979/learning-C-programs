#include <stdio.h>
int Average(int a,int b,int c);


int main(){
	int x=10,y=20,z=30;
	
	printf("The Average is %d", Average(x,y,z));
	
	return 0;
}
int Average(int a,int b,int c){
	
	return (a+b+c)/3;
}
