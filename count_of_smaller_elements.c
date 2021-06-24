#include<stdio.h>
int main()
{
    int n, number;
    printf("Enter your number");
    scanf("%d", &number);
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
    smaller_elements(a,number,n);
    return 0;
}

void smaller_elements(int arr[], int num, int n)
{
    int i, count=0;
    for( i = 0; i <n; i++)
    {
       if(arr[i]<=num){
           count++;
       }
       else{
           break;
       }
        
    }
    printf("\nNumber of elements less than %d is %d ", num, count);
    
}

