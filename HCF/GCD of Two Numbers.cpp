/* Program ID- 2531 
HCF/GCD of Two Numbers 
The program must accept two numbers X and Y and then print their HCF/GCD. 
Input Format: 
  The first line denotes the value of X. 
  The second line denotes the value of Y. 
Output Format: 
  The first line contains the HCF of X and Y. 
Boundary Conditions:
  1 <= X <= 999999 
  1 <= Y <= 999999 
Example Input/Output 1: 
Input: 
  30 40 
Output:
  10 
Example Input/Output 2: 
  Input:
    15 10 
  Output: 
    5 
    */
    #include <iostream> 
    using namespace std; 
    int main(int argc, char** argv) 
      { 
        int a,b,ans,i;
        cin>>a>>b;
        for(i=1;i<=a&&i<=b;i++)
          { 
            if(a%i==0&&b%i==0) 
              ans=i; 
          }
        cout<<ans;
      }
    
    
