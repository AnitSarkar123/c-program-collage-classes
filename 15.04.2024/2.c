#include<stdio.h>
int main(){
int n,cnt=0;
printf("Enter the value you want \n");
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<=i;j++){
cnt++;
printf("%d ",cnt);
}
printf("\n");
}
return 0;
}
