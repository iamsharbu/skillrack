/*
C++ - Class Method Definition Calculator add

Fill in the missing lines of code to define the class
Calculator along with the method add so that the program
accepts two integers as input and prints their sum as the output.
*/

#include <iostream>
using namespace std;
Class Calculator{
    public:
      int a,b;
    public:
      Calculator(int x,int y){
          a=x;
          b=y;
      };
      int add(){
        return a+b;
      }
};
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    Calculator calc{a,b};
    cout << calc.add();
    return 0;
}
