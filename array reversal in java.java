// Java program to reverse an array
import java.io.*;
import java.util.*; 
class ReverseArray {
 
    /* Function to reverse arr[] from start to end*/
    static void rvereseArray(int arr[], int start, int end)
    {
        int temp;
        if (start >= end)
            return;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        rvereseArray(arr, start+1, end-1);
    }
 
    /* Utility that prints out an array on a line */
    static void printArray(int arr[], int size)
    {
        int i;
        for (i=0; i < size; i++)
            System.out.print(arr[i] + " ");
        System.out.println("");
    }
 
    /*Driver function to check for above functions*/
    public static void main (String[] args) {
       
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
         int arr[]=new int [n] ;
        for(int i=0;i<n;i++){
          arr[i]=sc.nextInt();
        }
        printArray(arr, n);
        rvereseArray(arr, 0, n-1);
       // System.out.println("Reversed array is ");
        printArray(arr, n);
    }
}
