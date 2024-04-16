#include<stdio.h>
int main(){
int a,b;
printf("please enter a numbers\n");
scanf("%d %d",&a,&b);
switch(a>b){
case 0:
printf("the num %d is maximum\n",b);
case 1:
printf("the num %d is maximum\n",a);

return 0;
}
