#include <oistream>
using namespace std;
int main(){
	int d,f,e,g;
	cin>>d;
	f=(d/10000);
	e=(d/100)%10;
	g=(d%10);
	d=10000*f+e*100+g;
	cout<<d;
	return 0;
}
