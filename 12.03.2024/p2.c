#include<stdio.h>
int main(){
int a;
printf("please enter a numbers\n");
scanf("%d",&a);

switch(a%2==0){\
case 0:
printf("the num %d is odd\n",a);
case 1:
printf("the num %d is even\n",a);

return 0;
}
