#include <stdio.h>


int main(){
	
	FILE *fp;
	
	fp = fopen("C:\\filehandling\\write1.txt","a");
	
	if (fp==NULL){
		printf("File does not exist or not opening");
		return 1;
	}
	fprintf(fp,"how are you shubham \n");
	fprintf(fp,"how are you god \n");
	
	fclose(fp);
	printf("Data written sucessfully");
	return 0;
}

