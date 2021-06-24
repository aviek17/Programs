#include<stdio.h>
void pair_sum(int arr[], int n, int sum)
{
    int i , j ;
    for(i=0; i<n; i++){
        for (j=0; j<n; j++){
            if(arr[i]+arr[j]==sum){
                printf("Pair found at %d and %d", arr[i], arr[j]);
                return ;
            }

        }
    }
    printf("pair not found");
}

 int main()
 {
     int arr[]={1,5, 4, 6, 7, 10, 15,3};
     int sum=6;
     int n=(sizeof(arr))/(sizeof(arr[0]));
     pair_sum(arr, n, sum);
     return 0;
}