#include <iostream>
using namespace std;
int main () {
    int d,f,e,g;
    cin>>d>>f>>e>>g;
    if (d>5 && f>5 && (e%6 == 0) && (g%3 != 0))
        cout<<"yes";
    else
        cout<< "no";
return 0;
}
