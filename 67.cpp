#include <iostream>
using namespace std;
int main(){
	int maxi=-1,mini=-1,max=INT_MIN,min=INT_MAX;
	string d;
	cin>>d;
	for (int i=0;i<4;i++){
	    if ((int(d[i])-48)>max){
	        max=(int(d[i])-48);
	        maxi=i;
	    }
	    if ((int(d[i])-48)<min){
	        min=(int(d[i])-48);
	        mini=i;
	    }
	}
	d[maxi]=char(min+48);
	d[mini]=char(max+48);
	cout<<d;
	return 0;
}
