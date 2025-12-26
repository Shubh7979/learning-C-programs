#include<stdio.h>

int main(){
	FILE *fp;
	int numbers[5] = {10,20,30,40,50};
	fp=fopen("C:\\filehandling\\hacker.bin","wb");
	if (fp==NULL){
		printf("File does not exist or not opening");
		return 1;
	}
	fwrite(numbers,sizeof(int),5,fp);
	fclose(fp);
	printf("binary data written successfully");
	return 0;
}
