#include <iostream>
using namespace std;
int main(){
	int d,f,e,g;
	cin>>d;
	f=(d/100);
	e=(d/10)%10;
	g=(d%10);
	d=f+10*e+100*g;
	cout<<d;
	return 0;
}
