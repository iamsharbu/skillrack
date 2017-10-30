/*
Friend requests in social network

In a social network, a person can invite friends of his/her friend. John wants to invite and add new friends. Complete the program below so that it prints the names of the persons to whom John can send a friend request.

Input Format:
The first line contains the value of the N which represent the number of friends.
Next N lines contain the name of the friend F followed by the number of friends of F and finally their names separated by space.

Boundary Conditions:
2 <= N <= 10

Output Format:
The names to which John can send a friend request.

Example Input/Output 1:
Input:
3
Mani 3 Ram Raj Guna
Ram 2 Kumar Kishore
Mughil 3 Praveen Naveen Ramesh

Output:
Raj Guna Kumar Kishore Praveen Naveen Ramesh

Explanation:
Ram is not present in the output as Ram is already John's friend.

Example Input/Output 2:
Input:
4
Arjun 3 Bhuvana Ramya Rajesh
Naveen 2 Arjun Sangeetha
Rajesh 3 Narmada Madan Suresh
Suresh 2 Pawan Adhil

Output:
Bhuvana Ramya Sangeetha Narmada Madan Pawan Adhil
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
      int i,j,k,n,t=0;
      cin>>n;
      string s[9999],f[n];
      for(i=0;i<n;i++){
          cin>>f[i];
          cin>>k;
          for(j=0;j<k;j++){
              cin>>s[t];
              t++;
          }
      }
      for(i=0;i<t;i++){
          for(j=0;j<n;j++)
            if(f[j]==s[i])
              break;
            if(j==n)
              cout<<s[i]<<" ";
      }
}

