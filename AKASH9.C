#include<stdio.h>
int main(){
int day;
printf("enter the number ");
scanf("%d",&day);
switch(day){
	 case 1 :
		 printf("monday\n");
		 break;
	 case 2 :
		 printf("tuesday\n");
		 break;
	 case 3 :
		 printf("wednesday\n");
		 break;
	 case 4 :
		 printf("thursday\n");
		 break;
	 case 5 :
		 printf("friday\n");
		 break;
	 case 6 :
		 printf("saturday");
		 break;
	 case 7 :
		 printf("sunday");
		 break;
	 default :
	 printf("invalid your not a human\n");
	 }

	 return 0;
}