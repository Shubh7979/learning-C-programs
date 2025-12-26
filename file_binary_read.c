#include<stdio.h>

int main(){
	FILE *fp;
	int i;
	int numbers[5];
	fp=fopen("C:\\filehandling\\hacker.bin","rb");
	if (fp==NULL){
		printf("File does not exist or not opening");
		return 1;
	}
//	fwrite(numbers,sizeof(int),5,fp);
	fread(numbers,sizeof(int),5,fp);

	fclose(fp);
	printf("binary data \n");
	for (i=0;i<5;i++){
		printf("%d\n",numbers[i]);
	}
	return 0;
}
