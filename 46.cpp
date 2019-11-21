#include <iostream>
using namespace std;
int main() {
int d,f,e,sum=0;
cin>>d>>f>>e;
if (d%5==0)
    sum+=d;
if (f%5==0)
    sum+=f;
if (e%5==0)
    sum+=e;
if (sum==0)
    cout<<"error";
else 
    cout<<sum;
}
