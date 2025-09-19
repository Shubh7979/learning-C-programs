#include <stdio.h>

int main(){
	int marks;
	printf("enter your marks: ");
	scanf("%d",&marks);
	
	if (marks>35){
		printf("Passed");
	}
	else{
		printf("Failed");
	}
}
