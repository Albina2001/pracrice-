#include <iostream>
using namespace std;
int main () {
    int d,f,e;
    cin>>d>>f>>e;
    if (e<0) {
        cout<<"no";
    } else if (f<1 || f>12) {
        cout<<"no";
    } else {
        switch (f){
    case 1:
        if (d>=1 && d<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 2:
        if (d>=1 && d<=28)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 3:
        if (d>=1 && d<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 4:
        if (d>=1 && d<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 5:
        if (d>=1 && d<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 6:
        if (d>=1 && d<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 7:
        if (d>=1 && d<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 8:
        if (d>=1 && d<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 9:
        if (d>=1 && d<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 10:
        if (d>=1 && d<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 11:
        if (d>=1 && d<=30)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    case 12:
        if (d>=1 && d<=31)
            cout<<"yes";
        else 
            cout<<"no";
        break;
    }
    }
return 0;
}
