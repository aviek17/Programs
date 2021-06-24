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
    
    darkness(a,n);
    return 0;
}

void darkness(int a[], int n)
{
    int i, max=0;
    for ( i = 0; i < n; i++)
    {
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("Required no of days room will be lighted is %d ", max);
}