#include<stdio.h>
#include<conio.h>
int main(){
   int n;
   int count=0, c1=0;
   printf("Number of people for checkup is\n");
   scanf("%d",&n);
   int arr1[10], arr2[5];
   int age[n];
   printf("\nEnter age\n");
   for(int k=0;k<n;k++){
   scanf("%d", &age[k]);
   }
    for(int k=0;k<n;k++){
   if(age[k] > 60){
       if(count<5){
            arr2[count]=age[k];
           count++;
       }
       }
    else
    {
        arr1[c1]=age[k];
        c1++;

    }

    }

printf("\nQueue 1 time %d mins",(c1)*15);
printf("\nQueue 2 time %d mins",(count)*15);
return 0;

}

