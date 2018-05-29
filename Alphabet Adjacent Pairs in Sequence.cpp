/*
Alphabet Adjacent Pairs in Sequence

Accept a string S which contains only lower case alphabets and print the count of instances C where in a pair of adjacent characters, the right character is next to the left character in the original alphabetical sequence.

Boundary Condition(s):
1 <= Length of S <= 1000

Input Format:
The first line contains S.

Output Format:
The first line contains the integer value C

Example Input/Output 1:
Input:
abegh

Output:
2

Explanation:
ab gh are the two instances.

Example Input/Output 2:
Input:
abcdef

Output:
5

Explanation:
ab bc cd de ef are the five instances.
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int c=0;
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(((a[i]-'a')+1)==((a[i+1]-'a')))
            c++;

    }
    cout<<c;
}
