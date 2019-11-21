#include <iostream>
using namespace std;
int Result(int x) {
   return abs(x)+x*x*x*x*x;
  }
int main() {
    int a=-2;
    cout<<Result(a);
}
