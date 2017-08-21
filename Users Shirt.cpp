/* Program ID- 2708 
Solved By 1051 
Users Shirt -
Matching Pairs A shop to increase sales during a festival has an offer that a customer will get a discount 
if the customer buys shirts having same size in pairs. Any customer who buys will choose N shirts and 
the size of the shirt is denoted by S(i) where 1 <= i <=N. Two shirts S(i) and S(j) are matching and form a pair only 
if S(i) = S(j). The program must print the number of pairs eligible for the discount. 
Input Format: 
  The first line will contain the value of N 
  The second line will contain the the size of N shirts S(1) to S(N) with each size separated by a space. 
Output Format: 
    The first line will contain the number of matching pairs eligible for the discount. 
Constraints: 
  2 <= N <= 100 
Example Input/Output 1: 
  Input: 
    9 10 20 20 10 10 30 44 10 20 
  Output: 
    3
  Explanation: 
    The matching pairs are (10,10) (20,20) (10,10).
Example Input/Output 2: 
  Input:
    6 42 44 40 42 44 42 
  Output: 
    2 
  Explanation: 
    The matching pairs are (42,42) (44,44)*/ 
 
 #include <iostream> 
 #include<map> 
 using namespace std;  
 int main(int argc, char** argv) 
 { 
  map<int,int >a; 
  int total_inp_no,input,pair_count=0;
  cin>>total_inp_no; 
  for(int i=0;i<total_inp_no;i++) 
  {  
              cin>>input;     
              a[input]++;     //cout<<x<<"="<<a[x]<<" "<<"\n";  
              if(a[input]%2==0)    
                pair_count++;     
  } 
               cout<<pair_count;  
 }
