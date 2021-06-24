#include<stdio.h>
int main(){
    int n,count=0,k=0,l=1,flag=0,value=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            count++;
        }
    }
    int c=count;
    // printf("%d ",c);
    value = n-count;
    int A=value;
    // printf("%d ",A);

    if(A==0){
        l=0;
    }
    
    int Arr[n];
    for(int i=0;i<n;i++){
        if(arr[i]<0 ){
            if(A!=0 || flag==1){
                Arr[l]=arr[i];
                // printf("ll%d,l%d ",Arr[l],l);
                l=l+2;
            }
            else{
                Arr[l]=arr[i];
                // printf("ll%d,l%d ",Arr[l],l);
                l=l+1;
            }
            
            c--;
        }
        if(arr[i]>=0){
            A--;
            
            // 
            if(c!=0){
                Arr[k]=arr[i];
                // printf("kk%d,k%d ",Arr[k],k);
                k=k+2;

                flag=1;
            }
            else{
                Arr[k]=arr[i];
                // printf("kk%d,k%d ",Arr[k],k);
                k=k+1;
                flag=1;
            }
            
        }
        
        // 

    }

    for(int i=0;i<n;i++){
        printf("%d ",Arr[i]);
    }
    return 0;
}
