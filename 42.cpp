#include <iostream>
using namespace std;
int main() {
int d;
cin>>d;
if ((d>=2)&&(d<=5)){
    d+=10;
} else if ((d>7)&&(d<40)){
    d-=100;
} else if ((d<=0)||(d>3000)){
    d*=3;
} else {
    d=0;
}
cout<<d;
}
