#include<stdio.h>
int main(){
FILE *file;
char buffer[100];
file = fopen("lines.txt","r");
if(file == NULL){
printf("error opening file.\n");
return 1;
}
printf("contents of the files:\n");
while(fgets(buffer,sizeof(buffer),file)!=NULL){
printf("%s",buffer);
}
fclose(file);
return 0;
}