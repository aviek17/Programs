package Array;
import java.util.*;
public class LongestConsecutiveSubsequence {
    static int findLongestConsecutiveSubsequence(int arr[], int n){
        PriorityQueue <Integer> pq = new PriorityQueue <> ();

        for(int i=0;i<n;++i){
            pq.add(arr[i]);
        }

        int temp = pq.poll();
        int counter = 1 ;                       // it keeps count of size of subsequence
        int max = 1;                            // it keeps maximum length subsequence
        for(int i=1;i<n;++i){
            if(pq.peek()-temp>1){               // if difference is greater than 1 than there may be another sequence so we reset the counter to 1
                counter =1;
                temp = pq.poll();               // temp variable is set to next element
            }
            else if(pq.peek()-temp==1){         //if difference is equql to 1 than there is consecutive no so increase the count 
                counter++;
                temp = pq.poll();
            }
            else if(pq.peek()-temp == 0){       // if difference is equal to 0 than both the numbers are same so we just update the temp variable to next number
                counter++;
            }

            if(max<counter){
                max=counter;
            }
        }

        return max;
    }
    public static void main (String [] args){
        int n;
        Scanner sc = new Scanner (System.in);
        n = sc.nextInt();

        int[] arr = new int [n];
         for(int i=0;i<n;i++){
             arr[i] = sc.nextInt();
         }
         System.out.println(findLongestConsecutiveSubsequence(arr, n));
         sc.close();
    }
}
