#include<stdio.h>
void printval(int arr[], int k){
for(int i=0;i<k;i++){
printf("%d  ",arr[i]);
}
printf("\n");
    }
void Insertion(int arr[], int k, int element, int index){
    // code for Insertion
 
    for (int i = k-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    
   
}
void Deletelement( int arr[],int k,  int index){

    
    for (int i =index-1; i <k-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
}

int main(){
int arr[]={1,3,5,7,8,9,2};
int k=sizeof(arr)/sizeof(arr[0]);
 printval(arr,k);
Insertion( arr, k,6,3);
 k=sizeof(arr)/sizeof(arr[0])+1;
printval(arr,k);
Deletelement(arr,k,4);
 k=sizeof(arr)/sizeof(arr[0]);
 printval(arr,k);
return 0;
}
