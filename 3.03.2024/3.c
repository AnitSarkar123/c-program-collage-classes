#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,d;
char c;
printf("please give two numbers\n");
scanf("%d %d",&a,&b);
printf(" your first num:%d\n",a);
printf(" your second num:%d\n",b);
printf("+.for'+'\n");
printf("-.for'-'\n");
printf("*.for'x'\n");
printf("/.for'/'\n");
__fpurge(stdin);
printf("please give your choice\n");
scanf("%c",&c);
switch(c){
case '+':
printf(" sum of two num:%d\n",a+b);
break;
case '-':
printf(" substraction of two num:%d\n",a-b);
break;
case '*':
printf(" multiplication of two num:%d\n",a*b);
break;
case '/':
printf(" division of two num:%d\n",a/b);
break;
default:
printf(" 404 error come we cann't do anything\n");
}
return 0;
}
