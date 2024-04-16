#include<stdio.h>
int main(){
int n,cnt;
printf("Enter the value you want \n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
cnt=i;
for(int k=n-i;k>=1;k--)
{
printf("  ");
}
for(int j=1;j<=i;j++)
{

printf("%d ",cnt++);
}

printf("\n");
}
return 0;
}
