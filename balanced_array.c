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
    
    balanced_array(a,n);
    return 0;
}

balanced_array(int a[], int n)
{
    int i,j, sum1=0, sum2=0;
    for( i = 0; i < n/2; i++)
    {
        sum1+=a[i];
        
    }
    //printf("Sum1 is %d", sum1);
    for( j = n/2; j< n; j++)
    {
        //printf("\nSum2 is %d\n", sum2);
        //printf("\n%d", a[j]);
        sum2+=a[j];
        
    }
    //printf("Sum2 is %d", sum2);
    if (sum1>sum2){
        printf("Number to be addeed on right side is %d ", (sum1-sum2));
    }
    else{
        printf("Number to be added on left side is %d ", (sum2-sum1));
    }
    
    
}