#include <iostream>
using namespace std;
int main(){
int d;
cin>>d;
if ((d<-100)||(d>100)){
    d=0;
    cout<<d;
} else {
    d+=1;
    cout<<d;
}
}
