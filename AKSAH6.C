#include<stdio.h>
int main(){
int a,b,c;
printf("enter three number;");
scanf("%d%d%d",&a,&b,&c);
if(a>b && b<c){
printf("%d is largest\n",a);
}
else if(b>a && b>c){
printf("%d is greater\n",b);
}else{
printf("%d  is greater\n",c);
}
return 0;
}