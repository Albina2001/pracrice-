#include <iostream>
using namespace std;
int main(){
    double d,f;
    cin>>d>>f;
    if (d>12)
        d-=12;
    d=(d*60+f)*0.5;
    f*=6;
    cout<<abs(d-f);
}
