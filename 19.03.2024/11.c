#include<stdio.h>
int main(){
int n,a=0,b=1,c;
printf("enter your number\n");
scanf("%d",&n);
for(int i=0;i<=n;i++){
printf("The serise %d term : %d\n",i,a);
c=a+b;
a=b;
b=c;

}

return 0;
}
