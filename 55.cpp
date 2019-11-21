#include <iostream>
using namespace std;
int main(){
	double d,f,e,counter=0;;
	cin>>d>>f>>e;
    if (d>0)
        counter++;
    if (f>0)
        counter++;
    if (e>0)
        counter++;
    cout<<counter;
	return 0;
}
