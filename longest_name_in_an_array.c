#include <stdio.h> 
  
int main() 
{ 
    int i,n; 
    //printf("Enter number of words\n");
    
    // Direct initialization of 2-D char array 
    char array[][20] = { "Gk1", "Gek2", "Geek3", "AViekk", "fdsaerj" }; 
    n=sizeof(array)/sizeof(array[0]);
    
  
    // print the words 
    //for (i = 0; i < n; i++) 
      //  printf("%s\n", array[i]); 
    longest(array);
  
    return 0; 
} 
void longest(char a[]){
   int i, max=0;
for (i=0;i<5;i++){
    if (a[i]>max)
            max=a[i];    
}
printf("%s", max);
}
