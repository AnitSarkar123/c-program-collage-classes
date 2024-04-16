#include<stdio.h>
int main(){
double x,n;
printf("enter the number you want to calculate\n");
scanf("%lf",&x);
printf("enter your choice\n");
scanf("%lf",&n);
if(n==1){
printf("the value is %lf \n",(1+(x*x)));
}
else if(n==2) {
printf("the value is %lf \n",(1+(x/n)));
}
else if(n==3) {
printf("the value is %lf \n",(1+(2*x)));
}
//else if(n==2) {
//printf("the maximun num is %d \n",b);
//}
else{
printf("the value is %lf\n",(1+n*x));
}
return 0;
}
