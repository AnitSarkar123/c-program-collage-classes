#include<stdio.h>
int main(){
int n,f=1;
printf("enter your number\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
f=f*i;
}
printf("The factorial is %d\n",f);
return 0;
}
