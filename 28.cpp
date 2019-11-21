#include <iostream>
using namespace std;
int main() {
double d,f;
cin>>d>>f;
f/=100;
for (int i=0;i<5;i++){
    d=d + d*f;
}
cout<<d;
}
