#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<(n+1);i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n+1;i++){
        int min = i;
        for(int j=i+1;j<n+1;j++){
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
    // for(int i=0;i<n+1;i++){
    //    printf("%d ",arr[i]);
    // }
    for(int i=0;i<n+1;i++){
        if(arr[i]==arr[i+1]){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}