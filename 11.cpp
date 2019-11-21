#include <iostream>
using namespace std;
double Result(double x) {
   return (((abs(x-5)-sin(x))/3)+((pow((x*x+2014),0.5))*cos(2*x))-3);
  }
int main() {
    double a=-2.34;
   cout<<Result(a);
}

