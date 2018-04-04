/*
Pangram String [ZH]

A string S is passed as the input to the program. If S is a pangram, the program must print yes else it must print no. Uppercase and lower case letters of an alphabet are considered the same.

Pangram definition from WikiPedia: A Pangram (Greek: pan gramma, "every letter") or holoalphabetic sentence for a given alphabet is a sentence using every letter of the alphabet at least once.

Input Format:
The first line contains S

Output Format:
The first line contains the value yes or no depending on whether S is a pangram or not.

Boundary Conditions:
5 <= Length of S <= 1000

Example Input/Output 1:
Input:
Five jumping wizards hex bolty quick

Output:
yes

Example Input/Output 2:
Input:
abcdefghijklqrstuvwxyz

Output:
no

Explanation:
The alphabets mnop are not present.
*/
#include <iostream>
using namespace std;
int main(int argc, char** argv){
  string a;
  int i,aa[26]={0};
  getline(cin,a);
  for( i=0;i<a.length();i++){
      if(a[i]>='a'&&a[i]<='z')
        aa[a[i]-'a']++;
      else if(a[i]>='A'&&a[i]<='Z')
        aa[a[i]-'A']++;
  }
  for(i=0;i<26;i++)
    if(aa[i]==0)
      break;
  if(i==26)
    cout<<"yes";
  else
    cout<<"no";
}
