#include <iostream>
using namespace std;
int main () {
    int d,f;
    cin>>d>>f;
    if (d==11){
        switch (f){
        case 0: cout<<"North";
        break;
        case 1: cout<<"West";
        break;
        case -1: cout<<"East";
        break;
        }
    }
    if (d==12){
        switch (f){
        case 0: cout<<"West";
        break;
        case 1: cout<<"South";
        break;
        case -1: cout<<"North";
        break;
        }
    }
    if (d==13){
        switch (f){
        case 0: cout<<"South";
        break;
        case 1: cout<<"East";
        break;
        case -1: cout<<"West";
        break;
        }
    }
    if (d==14){
        switch (f){
        case 0: cout<<"East";
        break;
        case 1: cout<<"North";
        break;
        case -1: cout<<"South";
        break;
        }
    }

return 0;
}
