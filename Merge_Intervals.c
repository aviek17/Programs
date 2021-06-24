#include<stdio.h>
struct Merge{
    long Start;
    long End;
};
void quicksort(struct Merge mi[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(mi[i].Start<=mi[pivot].Start&&i<last)
            i++;
         while(mi[j].Start>mi[pivot].Start)
            j--;
         if(i<j){
            temp=mi[i].Start;
            mi[i].Start=mi[j].Start;
            mi[j].Start=temp;
         }
      }

      temp=mi[pivot].Start;
      mi[pivot].Start=mi[j].Start;
      mi[j].Start=temp;
      quicksort(mi,first,j-1);
      quicksort(mi,j+1,last);

   }
}
int main(){
    int capacity;
    scanf("%d",&capacity);
    struct Merge mi[capacity];
    for(int i=0;i<capacity;i++){
        scanf("%ld",&mi[i].Start);
        scanf("%ld",&mi[i].End);
    }
    quicksort(mi,0,capacity-1);
    for(int i=0;i<capacity;i++){
        printf(" S->%d E->%d ",mi[i].Start,mi[i].End);
    }
    return 0;
}