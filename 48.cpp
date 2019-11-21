#include <iostream>
using namespace std;
int main() {
int d,f,e;
cin>>d>>f>>e;
if ((d>=f)&&(d>=e)){
    if ((f>=e)){
        cout<<d<<" "<<f;
    } else {
        cout<<d<<" "<<e;  
    } 
} else 
if ((f>=d)&&(f>=e)){
    if ((f>=e)){
        cout<<f<<" "<<d;
    } else {
        cout<<f<<" "<<e;  
    }   
} else 
if ((e>=f)&&(e>=d)){
    if ((f>=d)){
        cout<<e<<" "<<f;
    } else {
        cout<<e<<" "<<d;  
    }
}
}
