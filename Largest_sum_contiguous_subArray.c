#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0, max = 0;
    for(int i =0;i<n;i++){
        sum = sum+arr[i];
        if(sum<0){
            sum=0;
        }
        else if(max<sum){
            max=sum;
        }
    }
    printf("%d",max);
    return 0;
}