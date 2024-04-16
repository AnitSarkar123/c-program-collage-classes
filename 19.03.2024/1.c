#include<stdio.h>
int main(){
int n;
printf("enter your number\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("%d\n",i);
}
printf("Their total is %d",((n*(n+1))/2));
return 0;
}
