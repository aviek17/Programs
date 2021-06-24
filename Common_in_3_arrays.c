#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int arr1[a];
    int arr2[b];
    int arr3[c];

    int min = ((a < b) ? (a < c ? a : c) : (b < c ? b : c));
    // printf("m%d ",min);
    int Arr[min];
    memset(Arr,99999,min);

    for(int i=0;i<a;i++){
        scanf("%d",&arr1[i]);
    }
     for(int i=0;i<b;i++){
        scanf("%d",&arr2[i]);
    }
     for(int i=0;i<c;i++){
        scanf("%d",&arr3[i]);
    }

    int i=0,j=0,k=0;
    while(i<a && j<b){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]==arr2[j]){
            Arr[k]=arr1[i];
            // printf("A %d ",Arr[i]);
            i++;
            j++;
            k++;
        }
    }
    
    i=0,j=0;
    while(i<min && j<c){
        if(Arr[i]<arr3[j]){
            i++;
        }
        else if( Arr[i]>arr3[j]){
            j++;
        }
        else if(Arr[i]==arr3[j]){
            printf("A %d ",Arr[i]);
            i++;
            j++;
        }
    }
    return 0;
    

}