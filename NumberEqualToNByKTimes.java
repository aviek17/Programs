package Array;
import java.util.*;

import jdk.jfr.Frequency;
public class NumberEqualToNByKTimes {
    static int findNumberOfNumberThatIsEqualToNByKTimes(int arr[], int n, int k){
        int x = n/k;
        PriorityQueue<Integer> hash = new PriorityQueue<>();
        int result =0;
        int temp;
        for(int i=0;i<n;i++){
            hash.add(arr[i]);
        }
        int ferquency;
        for(int i=0;i<n;i++){
            temp = hash.peek();
            // frequency = Collections.frequency(hash, temp);
            // check frequency
            // remove all that particular element
            // if greater than n/k the print

        }
        return result;
    }
    public static void main(String [] args){
        int n,k;
        Scanner sc = new Scanner (System.in);
        n = sc.nextInt();
        k=sc.nextInt();
        int[] arr = new int [n];
         for(int i=0;i<n;i++){
             arr[i] = sc.nextInt();
         }

         findNumberOfNumberThatIsEqualToNByKTimes(arr, n, k);
    }
}
