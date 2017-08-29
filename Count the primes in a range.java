/*
Count the primes in a range.

Two whole numbers N1 and N2 are passed as input. The program must print the number of primes present between N1 and N2 (the range is inclusive of N1 and N2)

Input Format:
First line will contain the value of the first number N1
Second line will contain the value of the second number N2

Output Format:
First line will contain the count of prime numbers between N1 and N2

Sample Input/Output:

Example 1:
Input:
6142
6200

Output:
6

Explanation:
The prime numbers within the range 6142 to 6200 are 6143, 6151, 6163, 6173, 6197, 6199


Example 2:
Input:
38
70

Output:
7

Explanation:
The prime numbers within the range 38 to 70 are 41, 43, 47, 53, 59, 61, 67

 */


import java.util.*;
import java.math.*;
public class Hello {
    public static void main(String[] args) {
    Scanner sc =new Scanner(System.in);
    BigInteger a=sc.nextBigInteger();
    BigInteger b=sc.nextBigInteger();
    int k=0;
    BigInteger m=a;
    BigInteger x=new BigInteger("1"); //x=1
    while(m.compareTo(b)==-1||m.compareTo(b)==0) //m<=b
    {
        if(m.isProbablePrime(1)==true) //m isprime
        {
            k++;
        }
        m=m.add(x);   //m+=x
    }
        System.out.print(k);
    }
}


