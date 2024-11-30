#include<stdio.h>
void main(){
	 int *ptr = (int *)malloc(1000000000*sizeof(int));
	 clrscr();
	 if(ptr == NULL){
		 printf("memory at location failed\n");
	 }else{
		 printf("memory at location successed\n");
	  free(ptr);
	  }
}