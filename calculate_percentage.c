#include <stdio.h>
void calPer(float total,float obtained){
	float percentage=(obtained*100)/total;
	printf("Percentage: %.2f%%\n",percentage);
}
int main (){
	float tm,om;
	
	printf("Enter total marks: ");
	scanf("%f",&tm);
	printf("Enter obtained marks: ");
	scanf("%f",&om);
	
	calPer(tm,om);
	
	return 0;
}
