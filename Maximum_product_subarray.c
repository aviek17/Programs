#include<stdio.h>
int maximum (int a , int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int minimum (int a , int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int MaxProduct(int arr[], int n){
   int total = arr[0];
   int max=arr[0], min= arr[0];
   int temp;
   for(int i=1;i<n;i++){
       temp = max;
       max = maximum(arr[i], maximum(arr[i]*max, arr[i]*min));
       min = minimum(arr[i], minimum(arr[i]*temp, arr[i]*max));

       total = maximum(total , max);
   }
   return total;
}

int main(){
    int n;
    int arr[] = {6,-3,-10,0,2};
    n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",MaxProduct(arr,n));
    return 0;
}