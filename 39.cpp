#include <iostream>
using namespace std;
int main(){
int d,f;
cin>>d>>f;
if (d>f)
    cout<<"yes";
else {
    d=d+f;
    f=d-f;
    d=d-f;
    cout<<d<<" "<<f;
}
}
