#include<stdio.h>
int main(){
int n,k=0,num;
printf("enter the limit\n");
scanf("%d",&n);
for(int j=2;j<=n;j++){
k=0;
for(int i=2;i<j;i++){
if(j%i ==0){
k++;

}
}
if(k==0){
printf("%d is prime\n",j);
}}
return 0;
}
