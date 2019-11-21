#include <iostream>
using namespace std;
int Result(int x, int y) {
   return (x+4*y)*(x-3*y)+x*x;
  }
int main() {
    int a=2, b=3;
    cout<<Result(a,b);
}
