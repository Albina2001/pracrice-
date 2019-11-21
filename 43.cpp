#include <iostream>
using namespace std;
int main() {
int d;
cin>>d;
if (((d>=1) && (d<=2))||(d==12)){
    cout<<"Winter";
} else if ((d>=3) && (d<=5)){
    cout<<"Spring";
} else if ((d>=6) && (d<=8)){
    cout<<"Summer";
} else if ((d>=9) && (d<=11)){
    cout<<"Autumn";
}
}
