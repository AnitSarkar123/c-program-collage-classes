#include<stdio.h>
int main(){
int n,f;
printf("enter your number\n");
scanf("%d",&n);
for(int i=1;i<n;i++){
if(n%i==0){
printf("factor:%d\n",i);
}
}

return 0;
}
