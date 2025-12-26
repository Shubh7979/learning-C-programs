#include <stdio.h>


struct student{
	int roll;
	char name[20];
	float marks;
};

int main (){
	int n;
	struct student stu[n];
	int i;
	printf("Enter number of students :");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Enter details for student %d : \n",i+1);
		printf("Enter student roll :");
		scanf("%d",&stu[i].roll);
		printf("Enter student name :");
		scanf("%s",stu[i].name);
		printf("Enter students marks :");
		scanf("%f",&stu[i].marks);
	}
	printf("student records\n");
	for(i=0;i<n;i++){
		printf("Roll No : %d \n",stu[i].roll);
		printf("Name : %s \n",stu[i].name);
		printf("Marks : %.2f \n",stu[i].marks);
	}
	
	
	return 0;
}
