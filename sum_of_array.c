#include<stdio.h>
int sum_of_array(int arr[], int m){
    int i=0;
    int sum=0;
    for( i = 0; i <m; i++)

    {
        sum=sum+arr[i];
    }
    return sum;
    
}
int main()
{
    int arr[]={1,5,4,7,21};
    int m=(sizeof (arr))/(sizeof arr[0]);
    int sum =sum_of_array(arr, m);
    printf("Sum of elements is %d ", sum);
    return 0;
}