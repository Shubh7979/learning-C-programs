#include <stdio.h>
#define PI 3.1416
float AreaofCircle(){
	int radius= 15;
	float Area = (PI*radius*radius);
	return Area;
	
}

int main(){
	
	printf("Area of circle : %.2f",AreaofCircle());
	return 0;
}
