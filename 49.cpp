#include <iostream>
using namespace std;
int main() {
int d,f,e,g;
cin>>d>>f>>e>>g;
if (d%2!=0)
    d=INT_MIN;
if (f%2!=0)
    f=INT_MIN;
if (e%2!=0)
    e=INT_MIN;
if (g%2!=0)
    g=INT_MIN;

if ((d>f)&&(d>e)&&(d>g))
    cout<<d;
else 
if ((f>d)&&(f>e)&&(f>g))
    cout<<f;
else 
if ((e>d)&&(e>f)&&(e>g))
    cout<<e;
else 
if ((g>d)&&(g>f)&&(g>e))
    cout<<g;
else 
cout<<"not found";
}
