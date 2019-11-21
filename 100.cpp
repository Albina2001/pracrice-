#include <iostream>
using namespace std;
int main(){
    int d,f,e,g;
    for (int i=1000;i<=9999;i++){
    d=(i/1000);
    f=(i/100)%10;
    e=(i/10)%10;
    g=(i%10);
    if ((d!=5)&&(f!=5)&&(e!=5)&&(g!=5)&&(d!=6)&&(f!=6)&&(e!=6)&&(g!=6))
        cout<<i<<endl;
    }
}
