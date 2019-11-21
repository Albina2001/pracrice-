#include <iostream>
using namespace std;
int main(){
int d;
cin>>d;
if ((d>-10)&&(d<10)){
    d+=5;
    cout<<d;
} else {
    d-=10;
    cout<<d;
}
}
