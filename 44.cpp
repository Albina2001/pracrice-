#include <iostream>
using namespace std;
int main() {
int d,f;
cin>>d>>f;
if ((d!=10)&&(f!=10)&&(d%2==0))
    cout<<d+f;
else 
    cout<<d*f;
}
