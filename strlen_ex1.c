#include<stdio.h>
#include<string.h>

void main(){
	char name[20];
	printf("Enter your name: ");
	gets(name);
	printf("length of %s is %d",name,strlen(name));
}
