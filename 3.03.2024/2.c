#include<stdio.h>
int main(){
int a,b,c;
printf("please give two numbers\n");
scanf("%d %d",&a,&b);
printf(" your first num:%d\n",a);
printf(" your second num:%d\n",b);

printf("1.for'+'\n");
printf("2.for'-'\n");
printf("3.for'x'\n");
printf("4.for'/'\n");
printf("please give your choice\n");
scanf("%d",&c);
switch(c){
case 1:
printf(" sum of two num:%d\n",a+b);
break;


case 2:

printf(" substraction of two num:%d\n",a-b);
break;

case 3:

printf(" multiplication of two num:%d\n",a*b);
break;

case 4:
printf(" division of two num:%d\n",a/b);
break;

default:
printf(" 404 error come we cann't do anything\n");
}

return 0;
}
