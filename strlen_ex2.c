#include<stdio.h>
#include<string.h>
void displayString(char str[]);
void main(){
//strcpy
/*	char name1[20];
	char name2[20];
	printf("Enter your name:");
	gets(name1);
	strcpy(name2,name1);
	
	printf("name 1 = %s \n",name1);
	printf("name 2 = %s",name2);
	
//strcmp	
	char s1[10] = "shubham";
	char s2[10] = "shuBham";
	
	if(strcmp(s1,s2)==0) //strcmp for case sensitive strcasecmp to ignore case related
		printf("string are equal");
		else
		printf("steing are not equal");
	*/
//strcasecmp	
/*	char password[20],input[20];
	strcpy(password,"admin123");
	
	printf("Enter Password\n");
	scanf("%s",&input);
	if(strcasecmp(password,input)==0) 
		printf("Password is correct");
		else
		printf("password is not correct");
	*/
//concatanation	
/*	char name1[20] = "Shubham";
	char name2[20] = "Kurhe";
	char name3[20] = "I am From Purna";
	strcat(name1,name2);
	strcat(name1,name3);
	
	printf("concatanated string = %s",name1);
	*/
	
	char str[50];
	printf("Enter String :");
//	gets(str); >>unsafe
	fgets(str,sizeOf(str),stdin); //safe
	displayString(str);
}
void displayString(char str[]){
	printf("Entered string ");
	puts(str);
}
