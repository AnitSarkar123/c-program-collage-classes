#include<stdio.h>
int main(){
int n[]={2,4,6,8,9,1};
int temp;
int k=sizeof(n)/sizeof(n[0]);
for(int i=0;i<k-1;i++){
for(int j=0;j<k-1-i;j++){
if(n[j]>n[j+1]){
temp=n[j];
n[j]=n[j+1];
n[j+1]=temp;
}}
}
for(int i=0;i<k-1;i++){
printf("%d\n",n[i]);
}
return 0;
}
