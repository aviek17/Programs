#include<stdio.h>
int main()
{
    int n, num;
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

    printf("\nEnter number which occurence is to calculate \n");
    scanf("%d",&num);
    
    number_of_occurence(a,n, num);
    return 0;
}

void number_of_occurence(int a[], int n, int num){
    int i , count=0;
    for ( i = 0; i < n; i++)
    {
        if(a[i]==num){
            count++;
        }
    }
    printf("\nNumber of %d in the array is %d ", num, count);
}
