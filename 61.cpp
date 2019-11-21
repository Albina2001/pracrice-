#include <iostream>
using namespace std;
int main(){
	int d,f,g,h,j;
	cin>>d;
	f=(d/1000);
	g=(d/100)%10;
	h=(d/10)%10;
	j=(d%10);
	if ((f==g)||(f==h)||(f==j)||(g==h)||(g==j)||(h==j))
	    cout<<"yes";
	else 
	    cout<<"no";
	return 0;
}
