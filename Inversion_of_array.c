#include<stdio.h>

int Merge (int arr[] , int aux[], int low, int mid, int high){
    int k=low, i=low, j=mid+1;
    int count =0;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            aux[k++]=arr[i++];
        }
        else{
            aux[k++]=arr[j++];
            count = count + (mid-i+1);
        }
    }
    while(i<=mid){
        aux[k++]=arr[i++];
    }
    for(int i=low;i<=high;i++){
        arr[i]= aux[i];
    }
    return count;
}

int MergeSort(int arr[], int aux[], int low, int high){
    if(high==low)
        return 0;
    int mid = (low+((high-low)>>1));
    int count=0;
    count = count + MergeSort(arr,aux,low,mid);
    count = count + MergeSort(arr,aux,mid+1,high);
    count = count + Merge(arr,aux,low,mid,high);

    return count;  
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],aux[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        aux[i]=arr[i];
        
    }
    printf("\n%d ",MergeSort(arr,aux,0,n-1));
    return 0;
}


