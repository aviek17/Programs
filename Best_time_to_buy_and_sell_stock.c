#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int Profit[n];
    for(int i=0;i<n;i++){
        scanf("%d",&Profit[i]);
    }
    int i=0,j=1,min,max,profit=0;
    while(i<=(n-1)){
        if(Profit[i]<Profit[j]){
            min=Profit[i];
            i++;
            j++;
            printf(" Min %d ",min);
        }
        else{
            i++;
            j++;
        }

        if(Profit[i]>Profit[j]){
            max=Profit[i];
            j++;
            printf("j %d ",j);
            i=j;
             printf("i %d ",i);
            printf(" Max %d ",max);
        }
        if(profit<(max-min)){
            profit=max-min;
        }
    }
    printf("%d",profit);
    return 0;
}