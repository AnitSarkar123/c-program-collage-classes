#include<stdio.h>
int  fibo(int n){
    // base condition  
    if(n==0){
    return 0;
    }  
    if(n==1){
    return 1;
    }
    return (fibo(n-1)+fibo(n-2));  
}
int main(){
int k;
printf("Enter your number\n");
scanf("%d",&k);
printf("the turm fibonachii nuber is %d\n",fibo(k));
return 0;
}
