package Array;
import java.util.*;
public class ArraySubset {
    static boolean ifSubsetOrNot(int arr[], int n,int arr2[], int m){
        HashSet <Integer> hs = new HashSet<>();
        for(int i=0;i<n;i++){
            hs.add(arr[i]);
        }
        int i=0;
        while(i<m){
            if(hs.contains(arr2[i])){
                i++;
            }
            else{
                return false;
            }
        }
        return true;
    }
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);
        int n,m;
        n = sc.nextInt();
        m = sc.nextInt();
        int [] arr = new int[n];
        int [] arr2 = new int [m];
        for(int i=0;i<n;i++){
            arr[i]= sc.nextInt();
        }
        for(int i=0;i<m;i++){
            arr2[i]= sc.nextInt();
        }
        boolean result = ifSubsetOrNot(arr, n, arr2, m);
        System.out.println(result);
        sc.close();

    }
}
