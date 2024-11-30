#include<stdio.h>
int main(){
int i;
FILE *file;
char *lines[]={"AKASH KASAPPA","SUBHASH KASAPPA","BASAVAKALYAN!"};
file=fopen("lines.txt","w");
if(file == NULL){
   printf("error opening the file.\n");
   return 1;
}
for(i=0;i<3;i++){
fprintf(file,"%s\n",lines[i]);
}
fclose(file);
printf("lines written to file successfully.\n");
return 0;
}