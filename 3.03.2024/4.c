#include<stdio.h>
int main(){
int a,b,c;
printf("enter two numbers \n");
scanf("%d %d",&a,&b);
printf("first number is %d\n",a);
printf("second  number is %d\n",b);
a=a+b;
b=a-b;
a=a-b;
printf("first number is %d\n",a);
printf("second number is %d\n",b);
return 0;
}
