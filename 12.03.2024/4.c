#include<stdio.h>
int main(){
int a,b,c,ch;

printf("enter three numbers \n");
scanf("%d %d %d",&a,&b,&c);
printf("1.For using logical\n");
printf("2.For using ternary operator\n");
printf("enter your choice\n");
scanf("%d",&ch);
//using logical operator
if(ch==1){
if(a>b && a>c){
printf("the maximun num is %d \n",a);
}
else if(b>c && b>a) {
printf("the maximun num is %d \n",b);
}
else{
printf("the maximun num is %d \n",c);
}

}
else{
//using ternary operator
(a>=b)?((a>=c)? printf("the maximun num is %d \n",a):printf("the maximun num is %d \n",c)):((b>=c)? printf("the maximun num is %d \n",b):printf("the maximun num is %d \n",c));
}
return 0;
}
