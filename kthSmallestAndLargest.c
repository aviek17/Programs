#include<stdio.h>
#include<stdlib.h>
#include<limits.h>




int main(){
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int Min = kMinimum(arr,k,n);

}