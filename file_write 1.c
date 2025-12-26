#include <stdio.h>


int main (){
	
	FILE *fp;
	
	fp = fopen("C:\\filehandling\\write1.txt","w");
	
	if (fp==NULL){
		printf("File does not exist or not opening");
		return 1;
	}
	fprintf(fp,"Hello this is shubham");
	fprintf(fp,"Hello this is me");
	
	fclose(fp);
	printf("Data written sucessfully");
	return 0;
}

