#include <stdio.h>

int main (){
	int day;
	printf("Enter day number (1 to 7): ");
	scanf("%d", &day);
	
	switch(day){
		case 1: printf("monday");
			break;
		case 2: printf("Tuesday");
			break;
		case 3: printf("Wednesday");
			break;
		case 4: printf("Thursday");
			break;
		case 5: printf("Friday");
			break;
		case 6: printf("Saturday");
			break;
		case 7: printf("Sunday");
			break;
		default:printf("Invalid Day");
	}

	return 0;
}
