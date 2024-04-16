#include<stdio.h>
int main(){
int n,k=0;
printf("enter your number\n");
scanf("%d",&n);
for(int i=2;i<=n/2;i++){
if(n%i !=0){
k=1;

}
else{
k=0;
}
}
if(k==1){
printf("The num is a prime\n");
}
else{
printf("not a prime\n");
}
return 0;
}
