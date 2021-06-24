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
    
    count_zeroes(a,n);
    return 0;
}

void count_zeroes(int a[], int n)
{
    int i, count=0;
    for ( i = 0; i < n; i++)
    {
        if(a[i]==0){
            count++;
        }
    }
    printf("Number of zeroes in array is %d ", count );
    
}