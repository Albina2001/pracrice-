#include <iostream>
using namespace std;
int main(){
int d,f;
cin>>d>>f;
if (f<0)
    cout<<"f is negative";
else if ((d-sqrt(f))<0)
    cout<<"no Answer";
else 
    cout<<sqrt(d-sqrt(f));
}
