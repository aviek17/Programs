#include<stdio.h>
int main()
{
    
 int n,  rotate;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter number of places to be rotated");
    scanf("%d",&rotate);
    int a[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    left_rotate(a,n, rotate);
    right_rotate(a,n, rotate);
    return 0;
}
void left_rotate(int a[], int n, int r)
{
    int temp=a[0];
    for(int i=0; i<r ;i++){
        for (int j= 0; j < n-1; j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
        
    }
    printf("\nrotated array is");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}

void right_rotate(int a[], int n, int r)
{
    int j, temp=a[n-1];
    for(int i=0; i<r ;i++){
        for (j=n-1;j>0;j++)
        {
            a[j]=a[j-1];
        }
        a[j]=temp;
        
    }
    printf("\nrotated array is");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}