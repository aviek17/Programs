#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
      for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp = arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    for(int i=0;i<n;i++){
        if(i<(n/2)){
            arr[i]=arr[i]+k;
        }
        else{
            arr[i]=arr[i]-k;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int diff = arr[n-1]-arr[0];
    printf("Difference is %d ",diff);

}