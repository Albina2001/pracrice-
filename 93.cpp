#include <iostream>
using namespace std;
int main(){
    double answer=0,i,d;
    cin>>d;
    for (i=1;i<=d;i++){
        answer+=i*i;
    }
    cout<<answer;
    return 0;
}
