#include <iostream>
using namespace std;
int main() {
int d,f,e;
cin>>d>>f>>e;
if ((d>=f)&&(d>=e))
    cout<<d;
else if ((f>=d)&&(f>=e))
        cout<<f;
else if ((e>=f)&&(e>=d))
        cout<<e;
}
