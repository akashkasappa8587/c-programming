#include<stdio.h>
void main(){
	 int *arr=(int*)calloc(5,sizeof(int)),i;
	 if(arr== NULL){
		  printf("memory at location failed\n");
		  return;
	 }
	 for(i=0; i<5; i++){
	 arr[i] = i+1;
	 }
	 arr= (int *)realloc(arr,5 *sizeof*(int));
	 for(i=0;i<5;i++){
	 arr[i]=+1;
	 }
	 printf("array elements after calloc :\n");
	 for(
	 printf("%d",arr[i]);
	 }
	 free(arr);
	 }
