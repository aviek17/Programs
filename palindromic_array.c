#include<stdio.h>
int main()
{
    int n;
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
    palindrome(a,n);
    return 0;
}

void palindrome(int a[], int n){
    int m,l,i;
    for(i=0;i<n;i++){
        m=a[i];
        //printf("\na%d \nm%d" ,a[i], m);
        int b=m;
        int sum=0;
        while(b!=0){
            l=b%10;
            sum=sum*10+l;
            b=b/10;
        }
        //printf("\ns%d \nm%d" ,sum, m);
        if (sum!=m){
            //printf("\nx");
            break;
        }
        
    }
    //printf("\na%d b%d c%d",sum,a[n-1],m);
    if(a[n-1]==m){
        printf("\nArray is palindrome 1");
    }
    else{
        printf("\n Array is not palindrome 0");
    }

}