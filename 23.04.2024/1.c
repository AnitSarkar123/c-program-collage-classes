#include<stdio.h>
int main(){
int n[]={2,4,6,8,9,1},sum=0;

int k=sizeof(n)/sizeof(n[0]);
for(int i=0;i<k;i++){
sum=sum+n[i];

}
printf("Total sum of the numbers of the array: %d\n",sum);
return 0;
}
