package Array;
import java.util.*;
public class SubsetSumProblem {
    static boolean isSumPossible(int arr[], int n, int sum){
        boolean t[][] = new boolean[n+1][sum+1];
        for(int i=0;i<=n;i++){
            if(sum==0){
                t[i][0] = true;
            }
        }
        for(int i=1;i<=sum;i++){
            if(n==0){
                t[0][i] =false;
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]>sum){
                    t[i][j] = t[i-1][j];
                }

                else{
                    t[i][j] = (t[i-1][j] || t[i-1][j-arr[i-1]]);
                }
            }
        }
        return t[n][sum];
    }
    public static void main(String[] args){
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int [] arr = new int [n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        int sum;
        sum = sc.nextInt();
        boolean result = isSumPossible(arr, n, sum);
        System.out.println(result);
        sc.close();
    }
}
