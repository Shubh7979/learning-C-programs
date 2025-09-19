#include<stdio.h>

int main(){

    int x,y,z;


    printf("Enter X value: ");
    scanf("%d",&x);
    printf("Enter X value: ");
    scanf("%d",&x);
    printf("Enter Z value: ");
    scanf("%d",&x);

    printf("logical operation Result: -\n");
    printf("And Result: %d \n ", (x>5 && y<10 && z>15) ); // AND operator
    printf("OR result:%d \n",(x>5 || y<10 ));  //OR operator
    printf("NOT result:%d  \n", !(x>y));  //NOT operator
	printf("ascending result:%d  \n", (x<y<z));
	printf("descending result:%d  \n", (x>y>z));
	return 0;
}
 
