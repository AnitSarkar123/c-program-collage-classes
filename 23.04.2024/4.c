#include<stdio.h>
int main(){
int val;
int n[]={2,4,6,8,9,1};
printf("Enter the value you want to find\n");
scanf("%d",&val);
int k=sizeof(n)/sizeof(n[0]);
for(int i=0;i<k;i++){
if(n[i]==val){
printf("the index is:%d\n",i+1 );
break;
}

}

return 0;
}
