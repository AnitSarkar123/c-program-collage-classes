#include<stdio.h>
//#include<stdlib.h>
int main(){
//int a,b,d;
int c;

printf("please give your number\n");
scanf("%d",&c);
switch(c>=0){
case 0:
printf("This is a negetive number\n");
break;
case 1:
  switch(c==0){
     case 1:
      printf("This is zero\n");
      break;
     case 0:
      printf("This is a positive number\n");
      break;
      }
  }
return 0;
}
