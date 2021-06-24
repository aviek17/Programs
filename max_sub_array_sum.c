#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = arr[0]  , max = sum;
    for(int i=1;i<n;i++){
        sum = sum + arr[i];
        

        if(arr[i]>sum && arr[i]<0){
            sum =arr[i];
           
        }
    
        else if(sum < 0){
            sum =0;
           
        }
        if(max<sum){
            max=sum;
           
        }
    }
    printf("%d ",max);
    
    return 0;
}
