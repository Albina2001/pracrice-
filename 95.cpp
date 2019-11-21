#include <iostream>
using namespace std;
int main(){
    double p=1,i,d,f;
    cin>>d>>f;
    for (i=1;i<=f;i++){
        p*=(d+i)*(d+i);
    }
    cout<<p;
    return 0;
}
