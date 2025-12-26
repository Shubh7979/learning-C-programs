#include <stdio.h>


int main (){
	
	FILE *fp;
	char name[100];
	int age,i,n;
	float marks;
	
	fp = fopen("C:\\filehandling\\students.txt","w");
	
	if (fp==NULL){
		printf("File does not exist or not opening");
		return 1;
	}
	printf("Enter number of Students: ");
	scanf("%d",&n);
	getchar();
	
	for(i=0;i<n;i++){
		printf("Enter details for student %d\n",i+1);
		
		printf("Name: ");
		fgets(name,sizeof(name),stdin);
		
		printf("Age: ");
		scanf("%d",&age);
		
		printf("marks: ");
		scanf("%f",&marks);
		getchar(); // clear newline after float input

        // Write to file
        fprintf(fp, "Student %d:\n\n", i + 1);
		
		fprintf(fp,"Name: %s",name);
		fprintf(fp,"age: %i\n",age);
		fprintf(fp,"marks: %.2f\n\n",marks);

	}

	
	fclose(fp);
	printf("Data written sucessfully");
	return 0;
}

