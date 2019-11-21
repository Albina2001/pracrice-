#include <iostream>
using namespace std;
int main() {
int d;
double f,e;
cin>>d>>f>>e;
    f/=100;
    for (int i=0;i<d;i++){
        e+=3;
        e+=(e*f);
    }
    cout<<e;
}
