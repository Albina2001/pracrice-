#include <iostream>
using namespace std;
double Result (int x, double a, double b) {
   return pow(x*x+b,0.2)-((pow(b,2))*(pow((sin(x+a)),3)))/x;
  }
int main() {
    int y=1; double d=0.1; double f=0.2;
   cout<<Result( y,d,f );
}
