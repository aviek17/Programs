#include<stdio.h>
#include<stdlib.h>
// int static Arr[1000][1000];
int subsetSumProblem(int arr[],int sum, int n){
    int count=0;
    if(sum=0){
        return 1;
    }
    if(n==0 && sum==0){
        return 1;
    }
    if(n==0 && sum!=0){
        return 0;
    }
    if(arr[n-1]<=sum){
        count = count + (subsetSumProblem(arr,sum-arr[n-1],n-1)+subsetSumProblem(arr,sum,n-1));
        printf(" c1 %d",count);
        return count;
    }
    else{
        count = count + subsetSumProblem(arr,sum,n-1);
        printf(" c2 %d",count);
        return count;
    }
}

int main(){
    int arr[4]={1,5,7,1};
    int sum=6;
    int value = subsetSumProblem(arr,sum,4);
    // memset(Arr,0,)
    // printf("%d",value);
    return 0;
}




// Not solved
