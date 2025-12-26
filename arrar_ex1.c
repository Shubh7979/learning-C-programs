#include <stdio.h>

int main(){
/*	int marks[5] = {45,3,15,25,35};
	int i;
	printf("Enter 5 subject marks: \n");
	for(i=0;i<5;i++){
		scanf("\n %d",&marks[i]); 
	}
//	marks[1] = 55;
//	marks[3] = 100;
	printf("\n Updated Arrays list : ");
	for(i=0;i<5;i++){
		printf(" marks[%d] = %d \n",i,marks[i]); 
	}
	
//sum of array elements
	
	int arr[]={10,20,30,40,60,80};
	int sum = 0;
	int length = sizeof(arr)/sizeof(arr[0]); 
	int i =0;
	for(i=0;i<length;i++){
		sum +=arr[i];
		
	}
	printf("Total array sum = %d", sum);
	
	
	//reverse a array
	int arr[5]={10,20,30,40,50};
	int length = sizeof(arr)/sizeof(arr[0]); 
	int i =(length-1);
	printf("Reverse order :");
	for(i;i>=0;i--){
		printf("[%d],",arr[i]);
	}
	
	
	//copy an array
	int arr2[5] = {1,2,3,4,5};
	int arr3[5] ;
	int i;
	for(i=0;i<5;i++){
		arr3[i] = arr2[i];
		
	}
	printf("Copied array");
	for(i=0;i<5;i++){
		printf("%d,",arr3[i]);
	}
	// count even or odd
	
	int arr4[6]={1,2,3,4,5,6};
	int even = 0,odd=0;
	for(i=0;i<6;i++){
	 if(arr4[i] %2 ==0){
	 	even++;
	 }else{
	 	odd++;
	 }
	 
	}
	printf("Even: %d Odd: %d", even,odd);
	return 0;
	*/
	//find maximum element
	
	int arr5[5] ={12,1333,546,66,72};
	int max =arr5[0];
	int min = arr5[0];
	int i ;
	for(i=0;i<5;i++){
		if(arr5[i]>max){
			max = arr5[i];
		}
	}
	for(i=0;i<5;i++){
		if(arr5[i]<min){
			min = arr5[i];
		}
	}
	printf("maximum :%d",max);
	printf("minimum :%d",min );
} 
