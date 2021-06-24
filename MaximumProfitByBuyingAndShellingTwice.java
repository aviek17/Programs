package Array;
import java.util.*;
public class MaximumProfitByBuyingAndShellingTwice {
    static int findMaximumProfit(int arr[] , int n){
        int start , end;
        int diff;
        int sum =0;
        int max=0;
        start = arr[0];
        end = arr[0];
        int i=0;
       while(i<n){
           if(start<arr[i+1]){
               end = arr[i+1];
               diff = end-start;
               if(max<diff){
                   max=diff;
               }
               sum = sum +diff;
               i++;
           }
           if(i>0 && start>arr[i]){
               start = arr[i];
               end = arr[i];
           }

       }
        return sum;
    }
    public static void main(String[] args){
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int [] arr = new int [n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        System.out.println(findMaximumProfit(arr, n));
        sc.close();
        
        
    }
}
