#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	double x = 81.99 , y=2.3, z=7.8 ,angle = 0.0;
	int i=-25;

	
	printf("Squart (%.0f) =%.2f \n",x,sqrt(x)); // squareroot
	
	printf("Power (2,3) = %0f \n",pow(2,3)); //power of
	
	printf("abs(%d) = %d \n",i,abs(i)); //absolute value (removing negative to positive)
	
	printf("ceil(%f) = %f \n" ,y,ceil(y)); //rounding off to higher number 2.3 -> 3
	
	printf("floor(%f) = %f \n",z,floor(z)); //rounding off to lower number 7.8 -> 7
	
	printf("sin(0)= %.2f \n",sin(angle)); //sin function
	
	printf("cos(0)= %.2f \n",cos(angle)); //cos function
	
	printf("tan(0)= %.2f \n",tan(angle)); //tan function
	return 0;
}
