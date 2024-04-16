#include<stdio.h>
int main(){
int n,r=0,k;

printf("enter your number\n");
scanf("%d",&n);
k=n;
while(n!=0){
r=r*10+(n%10);
n=n/10;
}
if(r==k){
printf("The num is a pallidrome\n");
}
else{
printf("not a pallidrome\n");
}
return 0;
}
