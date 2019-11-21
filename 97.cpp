#include <iostream>
using namespace std;
int main(){
    int d,answer=0,temp;
    cin>>d;
    for (int i=1;i<=d;i++){
        temp=1;
        for (int j=i;j<=2*i;j++){
            temp*=j;
        }
        answer+=temp;
    }
    cout<<answer<<endl;
    return 0;
}
