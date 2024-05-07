#include<stdio.h>


int  fact(int n){
    // base condition
    if(n==0||n==1){
    return 1;
    }
    return n*fact(n-1);
   
}


int main(){
int k;
printf("Enter your number\n");
scanf("%d",&k);
printf("fact of the number is %d\n",fact(k));
return 0;
}
