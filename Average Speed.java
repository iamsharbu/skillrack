/*
Average Speed

A single line L with a set of space separated values indicating distance travelled and time taken is passed as the input. The program must calculate the average speed S (with precision upto 2 decimal places) and print S as the output.

Note: The distance and time taken will follow the format DISTANCE@TIMETAKEN. DISTANCE will be in kilometers and TIMETAKEN will be in hours.

Input Format:
The first line contains L.

Output Format:
The first line contains the average speed S.

Boundary Conditions:
Length of L will be from 3 to 100.

Example Input/Output 1:
Input:
60@2 120@3

Output:
36.00 kmph

Explanation:
Total distance = 60+120 = 180 km.
Total time taken = 2+3 = 5 hours.
Hence average speed = 180/5 = 36.00 kmph
*/

import java.util.*;
public class Hello {
    public static void main(String[] args) {
        //Your Code Here
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    String[] x = s.split(" ");
    int s1=0,s2=0;
    for(int i=0;i<x.length;i++)
    {
        String[] a= x[i].split("@");
        s1=s1+Integer.parseInt(a[0]);
        s2=s2+Integer.parseInt(a[1]);
    }
    float f = (float)s1/s2;
    System.out.printf("%.2f kmph",f);
    }
}


