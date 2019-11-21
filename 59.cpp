#include <iostream>
using namespace std;
int main(){
	int d,f,e,g,h;
	cin>>d;
	f=(d/1000);
	e=(d/100)%10;
	g=(d/10)%10;
	h=(d%10);
	if ((f>e)&&(f>g)&&(g>h))
	    cout<<"yes";
	else 
	    cout<<"no";
	return 0;
}
