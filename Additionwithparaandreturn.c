#include <stdio.h>
int add(int a,int b){
	return a + b;
}
int sub(int a,int b){
	return a - b;
}
int multi(int a,int b){
	return a * b;
}
int div(int a,int b){
	return a / b;
}

int main(){
	int x=6,y=10;
	int result = add(x,y);
	printf("Addition is %d \n",result);
	printf("Substraction is %d \n",sub(x,y));	
	printf("Multiplication is %d \n",multi(x,y));
	printf("Division is %d \n",div(x,y));
	return 0;
}
