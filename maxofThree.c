//max of 3

#include <stdio.h>
int maxofThree(int a,int b,int c){

	
	if(a>b &&a>c){
		
		return a;
	} else if(b>c){
		
		return b;
	} else {
		return c;
	}
}

int main(){
	int x,y,z;
	printf("Enter first no. : ");
	scanf("%d",&x);
	printf("Enter second no. : ");
	scanf("%d",&y);
	printf("Enter third no. : ");
	scanf("%d",&z);

	int result = maxofThree(x,y,z);
	printf("Maximum no. : %d",result);
	
	return 0;
}
