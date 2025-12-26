#include<stdio.h>

int main(){
	char name[20];
	printf("what is your name? ");
//	scanf("%s",&name);
	gets(name);
	printf("my name is %s", name);
	
	return 0;
}
