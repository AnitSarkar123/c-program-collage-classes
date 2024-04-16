#include<stdio.h>
int main(){

int n1,n2,hcf;
printf("enter your numbers\n");
scanf("%d %d",&n1,&n2);

for(int i=2;i<n1 && i<n2;i++){
if(n1%i==0 && n2%i==0){
hcf=i;
}
}

printf("The lcm is %d\n",((n1*n2)/hcf));
printf("The hcf is %d\n",hcf);

return 0;
}
