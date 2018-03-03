/*
Exclude Palindrome Words

Given a string S with multiple words, print only the words which are not palindrome. The palindrome check is case insensitive (That is MALAyalam is a palindrome).

Boundary Condition:
1 <= Length of S <= 10000

Input Format:
The first line contains the string S.

Output Format:
The first line contains the string with words which are not palindromes.

Sample Input/Output 1:
Hi madam how can I help you?

Output:
Hi how can help you?

Sample Input/Output 2:
I am not Anna

Output:
am not
*/

#include < bits / stdc++.h >
using namespace std;
bool ispal(string a) {
  transform(a.begin(), a.end(), a.begin(), ::tolower);
  string b(a);
  reverse(a.begin(), a.end());
  return b == a;
}
int main(int argc, char * * argv) {
  string x;

  while (cin >> x) {
    if (!ispal(x))
      cout << x << " ";
  }

}
