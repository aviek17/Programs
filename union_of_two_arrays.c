#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int Common[1000];
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m], Arr[n];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&Arr[i]);
    }
    int min;
    if(m<n){
        min = m;
    }else{
        min = n;
    }
    int max;
    if(m>n){
        max = m;
    }else{
        max = n;
    }
    for(int i=0;i<min;i++){
        
        if(arr[i]==Arr[i]){
            Common[i]=arr[i];
            //  printf(" a %d ",Common[i]);
        }
        else if(arr[i]!=Arr[i]){
            Common[i]=arr[i];
            //  printf(" b %d ",Common[i]);
            i++;
            Common[i]=Arr[i];
            //  printf(" c %d  ",Common[i]);
        }
    }
    for(int i=max-min+1;i<max;i++){
        if(m>n){
            Common[i]=arr[i];
        }
        if(m<n){
            Common[i]=Arr[i];
        }
    }
    for(int i=0;i<max;i++){
        printf("%d ",Common[i]);
    }
    return 0;

}