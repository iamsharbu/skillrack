/*
Mixed Arithmetic Progressions

M arithmetic progressions each having N terms (with the terms differing by d1,d2,...dm) are passed as input with the terms shuffled. The program must print the terms in M arithmetic progressions in sequential order with the smallest starting term first.

Input Format:
The first line contains the value of M
The second line contains the terms separated by space (The number of terms will be M*N)


Boundary Conditions:
2 <= M <= 5
N >= 3

Output Format:
The terms in the progressions (each separated by a space) in sequential order with the progression having the smallest starting term appearing first.


Example Input/Output 1:

Input:
2
1 4 8 12 7 16

Output:
1 4 7 8 12 16

Explanation:
There are two progressions. Hence 6/2 = 3 terms in each progression.
So the first A.M has 1 4 7 and the second has 8 12 16
As 1 < 8, 1 4 7 is printed followed by 8 12 16


Example Input/Output 2:

Input:
3
2 6 8 10 15 22 12 11 4

Output:
2 4 6 8 15 22 10 11 12

Explanation:
There are three progressions. Hence 9/3 = 3 terms in each progression.
So the first A.M has 2 4 6 and the second has 8 15 22. The third has 10 11 12.

Note: We cannot have 8 10 12 as the second progression as the remaining numbers 11 15 22 do not for an arithmetic progression.
*/

import java.util.*;
import java.util.Arrays;
public class Hello {
    public static  int calc(int[] a,int b[],int m,int m1){
        int i,j,k,l,n,o;
        n=a.length;o=n/m;
        int[] c=new int [n];
        for(i=0;i<n;i++)
        if(b[i]==0)break;
        if(i==n){
            return 0;
        }
        for(i=0;i<n;i++)c[i]=b[i];
        
        for(i=0;i<n;i++)
        if(b[i]==0){
            for(j=i+1;j<n;j++)
            if(b[j]==0&&a[i]!=a[j])
            {
                k=a[j]-a[i];l=2;b[j]=b[i]=m1;
                int x=a[j]+k,y,z;
                while(l<o){
                for(y=0;y<n;++y)if(a[y]==x&&b[y]==0)break;
                    if(y==n)break;
                    b[y]=m1;
                    x+=k;++l;
                }
                if(l==o){
                    ++m1;
                    calc(a,b,m,m1);
                }
            else{
                for(x=0;x<n;++x)b[x]=c[x];
            }
        }
    }
    return 0;
    }
    public static void main(String[] args) {
        //Your Code Here
        Scanner sc=new Scanner(System.in);
        int i,j,k,l,m,n,x=0;
        m=sc.nextInt();
        String s="",t="";
        s+=sc.nextLine();
        t+=sc.nextLine();
        String[] c=t.split(" ");
        int[] a=new int[c.length];
        for(i=0;i<c.length;++i)
        a[i]=Integer.parseInt(c[i]);
        Arrays.sort(a);
        int[] b=new int[c.length];
        for(int v=0;v<c.length;v++)b[v]=0;
        j=calc(a,b,m,0);
        n=a.length;
        while(x<n){
            for(i=0;i<n;i++)if(b[i]!=0)
            {j=b[i];break;}
            for(i=0;i<n;i++)
            if(b[i]==j)
            {b[i]=0;System.out.print(a[i]+" ");++x;}
        }
    }
}



