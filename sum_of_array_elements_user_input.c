#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array ");
    scanf("%d ", &n);
    printf("Enter elements ");
    int arr1[6]={};
    for (int i = 0; i < 6; i++)
    {
        scanf("%d ", &arr1[i]);
    }
    int sum = sum_of_array(arr1, 6) ;
    printf("Sum of array elements is %d ", sum );
    return 0;
}

int sum_of_array(int arr[], int m){
    int i=0;
    int sum=0;
    for( i = 0; i <m; i++)

    {
        sum=sum+arr[i];
    }
    return sum;
    
}
