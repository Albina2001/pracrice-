#include <iostream>
using namespace std;
double Result(double x) {
    double e=2.71;
   return (pow(e,(x-2))+abs(sin(x))-pow(x,4)*cos(1/x));
  }
int main() {
    double a=3.6;
   cout<<Result(a);
}
