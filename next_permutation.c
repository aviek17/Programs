#include<stdio.h>

void reverseArray(int arr[],int start,int end,int size){
    while(start<end){
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
     for(int k=0;k<size;k++){
       printf("%d ",arr[k]);
   }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-2,value,index;
    while(i<=j){
        if(arr[j]>arr[j+1]){
            j--;
        }
        else{
            index=j;
            value=arr[j];
            break;
        }
    }
    j=n-1;
    while(i<=j){
        if(arr[j]<=value){
           
            j--;
           
        }
        else{
           int temp = arr[j];
           arr[j]=value;
           arr[index]=temp;
           break;
        }
    }
    reverseArray(arr,index+1,n-1,n);
    return 0;
}