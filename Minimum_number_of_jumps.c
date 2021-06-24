#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    int count=0;
    while(i<n){
         i=i+arr[i];
         if(i<n-1){
             count++;
         }
    }
    printf("No of jumps :- %d",count+1);
    return 0;
}