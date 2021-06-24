#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int negative = 0 , positive = n-1;
    int Arr[n];
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            Arr[negative]=arr[i];
            negative++;
        }
        else if(arr[i]>=0){
            Arr[positive]=arr[i];
            positive--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",Arr[i]);
    }
    return 0;
}