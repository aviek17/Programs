#include<stdio.h>
int main()
{
    int arr1[]={1,0,1,0,0,1,1};
    int arr2[]={1,1,0,0,1,0,1};
    int m=(sizeof (arr1))/(sizeof arr1[0]);
    int n=(sizeof (arr2))/(sizeof arr2[0]);
    
    longest(arr1,arr2,m,n) ;
    return 0;
}

void longest(int arr1[],int arr2[],int m,int n){
    int i=0,j=0,maxlen=0;
    int sum1=0, sum2=0;
    
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < m; j++)
        {
            sum1=sum1+arr1[j];
            sum2=sum2+arr2[j];

            if(sum1==sum2){
                int len=j-i+1;
                if (len > maxlen)
                {
                    maxlen=len;

                }
                
            }

        }
        
      

    }
    
printf("MAx length is %d", maxlen);
}