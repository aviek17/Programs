/*
algo:
1. sort the array
2. in a loop check if (array(i) +1) is equals to array(i+1) or not
3. if not increment count which is first initialized to 1 
4. return count
*/

#include<stdio.h>
int main()
{
    
 int n;
    printf("\nEnter number of elements \n");
    scanf("%d",&n);
    
    
    int a[n];
    printf("\nEnter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nElements are\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    sort(a,n);
    return 0;
}

void sort(int arr[], int n){

    for (int i = 0; i < n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                   int  a =  arr[i];
                   arr[i] = arr[j];
                    arr[j] = a;
 
                }
 
            }
 
        }
    
    subsets(arr,n);
}

void subsets(int arr[], int n)
{
    int i, count=0;
    for ( i = 0; i < n; i++)
    {
        if((arr[i]+1)!=arr[i+1]){
            count++;
        }
    }

    printf("\nNumber of subsets with consecutive number is %d", count);
    

}