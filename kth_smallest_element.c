#include<stdio.h>
int main()
{
    
 int n,  rotate, k;
    printf("\nEnter number of elements \n");
    scanf("%d",&n);
    printf("\nKth  smallest element in the array is \n");
    scanf("%d",&k);
    
    int a[n];
    printf("\nEnter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nElements are\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    sort(a,n,k);
    return 0;
}

void sort(int arr[], int n, int k){

    for (int i = 0; i < n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                   int  a =  arr[i];
                   arr[i] = arr[j];
                    arr[j] = a;
 
                }
 
            }
 
        }
    
    kth_element(arr,n, k);
}

void kth_element(int arr[], int n, int k)
{
   printf("\nKth smallest elemnt in the array is %d ", arr[k-1]);
}