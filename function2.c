#include <stdio.h>

void printsum(int a, int b){
	printf("sum=%d\n",a+b);
}
void printsub(int a, int b){
	printf("sub=%d\n",a-b);
}
void printmulti(int a, int b){
	printf("multi=%d\n",a*b);
}
void printdiv(int a, int b){
	printf("div=%d\n",a/b);
}
int main(){
	printsum(45,7);
	printsum(1,2);
	printsub(77,57);
	printmulti(12,99);
	printdiv(25,5);
	
	return 0;
} 
