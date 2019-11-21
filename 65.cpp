#include <iostream>
using namespace std;
int main(){
	string d,temp;
	cin>>d;
	for (int i=0;i<d.length();i++)
	    if (d[i]>='0' && d[i]<='4')
	        temp+=d[i];
	for (int i=0;i<d.length();i++)
	    if (d[i]>='5' && d[i]<='9')
	        temp+=d[i];
	cout<<temp;
	return 0;
}
