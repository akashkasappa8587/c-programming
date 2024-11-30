#include<stdio.h>
int main(){
FILE*file;
char data[500];
printf("enter to data to write to the file\n");
gets(data);
file=fopen("outpur.text","w");
if(file==NULL){
printf("error opening file\n");
return 1;
}
fprintf(file,"%s",data);
printf("data return to file successfully\n");
return 0;
}