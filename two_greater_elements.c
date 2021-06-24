 #include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    sort(a,n);
    return 0;
}

void sort(int arr[], int n){
    int i,j,m;
    m=n;
    for(i=m-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(arr[j]>arr[j+1]){
          int temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
      }
   }
    printf("\nSorted array is\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    greater_elements(arr,m);

}

void greater_elements(int arr[],int n)
{
    printf("\nAtleast two greater elements");
    for(int i=0;i<n-2;i++){
        printf("%3d",arr[i]);
    }

}


