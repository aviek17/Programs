#include<stdio.h>
int main()
{
    int m;
    //printf("Enter noof elements");
    //scanf("%d ", &n);
    int a[9];
    printf("Enter array elements\n");
    for (m=0;m<9;++m){
        //printf("a");
        scanf("%d",&a[m]);
    }

    for (m=0;m<9;m++){
        if (m%2==0){
           continue;
        }
        else{
    
            printf("%d ", a[m]);
            
        }
        
    }
return 0;

}