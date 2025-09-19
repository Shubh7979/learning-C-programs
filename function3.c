#include <stdio.h>

void area(int length,int width){
	printf("Area of rectangle :%d\n", length * width);
}
void printTable(int num){
	int i;
	for(i=1;i<=10;i++){
		printf("%d x %d = %d\n",num,i,num*i);
	} 
}

int main(){
	
//	int l,w;
//	printf("Enter length: ");
//	scanf("%d",&l);
//	printf("Enter width: ");
//	scanf("%d",&w);
	
//	area(l,w);
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printTable(n);
	
	return 0;
}
