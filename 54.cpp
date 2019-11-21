#include <iostream>
using namespace std;
int main () {
    int d,f,e;
    int counter=0;
    cin>>d>>f>>e;
    if (d<5)
        counter++;
    if (f<5)
        counter++;
    if (e<5)
        counter++;
    if (counter==2)
        cout<<"yes";
    else
        cout<<"no";

return 0;
}
