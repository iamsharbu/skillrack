\*
HCF (GCD) of long values

The program must accept two long values X, Y and print their HCF (GCD).

Input Format:
The first line contains X and Y separated by a space.

Output Format:
The first line contains the HCF (GCD) of X and Y.

Boundary Conditions:
1 <=  X, Y <= 999999999999

Example Input/Output 1:
Input:
20 30

Output:
10

Example Input/Output 2:
Input:
999999999999 151515151515

Output:
30303030303
*/


import java.util.*;
import java.math.*;
public class Hello {
    public static void main(String[] args) {
        //Your Code Here
        Scanner sc=new Scanner(System.in);
        BigInteger a=sc.nextBigInteger();
        BigInteger b=sc.nextBigInteger();
        System.out.print(a.gcd(b));
        
    }
}




