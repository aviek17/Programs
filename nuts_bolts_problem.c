#include<stdio.h>
int main()
{
    
 int n,  rotate;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    
    long a[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    printf("Elements are\n");
    for(int i=0;i<n;i++){
        printf("%ld ",a[i]);
    }
    
   
    return 0;
}