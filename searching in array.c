#include<stdio.h>
#include<conio.h>
void main(){
	int arr[5],i,search,temp=0;
	printf("Enter the value in Array:\n");
	for(i = 0; i < 5; i++){
		printf("index number %d :",i);
		scanf("%d",&arr[i]);
	}
	printf("\nWhat you want to search:");
	scanf("%d",&search);
	for(i = 0; i < 5; i++){
		if(search == arr[i]){
			temp = 1;
			break;
		}	
	}
	
	if(temp==1){
		printf("\n %d is present.",search);
	}
	else{
		printf("\n %d is not present.",search);
	}
	getch();
}
