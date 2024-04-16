#include<stdio.h>
int main(){
int a,b,c;
printf("enter three numbers \n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
printf("the maximun num is %d \n",a);
}
else if(b>c && b>a) {
printf("the maximun num is %d \n",b);
}
else{
printf("the maximun num is %d \n",c);
}
return 0;
}
