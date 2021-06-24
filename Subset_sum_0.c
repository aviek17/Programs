#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// static int arr[1000][1000];

int subset (int Arr[], int n, int sum){
    int t[n+1][sum+1];
    for(int i=1;i<=sum;i++){
        if(n==0 && sum!=0){
            t[0][i]=0;
        }
    }
    for(int i=0;i<=n;i++){
        if(sum==0){
            t[i][0]= 1;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(Arr[i-1]>sum){
                t[i][j]=t[i-1][j];
            }
            else{
                t[i][j]=(t[i-1][j-Arr[i-1]] || t[i-1][j]);
            }
        }
    }
    return t[n][sum];
   
}

int main(){
    int n,sum;
    scanf("%d",&n);
    int Arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&Arr[i]);
    }
    scanf("%d",&sum);
    // memset(arr, 0, sizeof(arr));

    printf("%d ",subset(Arr,n,sum));
    return 0;

}