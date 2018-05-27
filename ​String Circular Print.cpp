#include <iostream>
using namespace std;
int main(int argc, char** argv){
    string a;
    cin>>a;
    int x;
    cin>>x;
    for(int i=0,k=0;i<x;i++){
        cout<<a[k];
        k++;
        if(k==a.length())
            k=0;
    }
}
