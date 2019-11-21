#include <iostream>
using namespace std;
int main(){
	int d,f,e,g,h,j;
	cin>>d>>f>>e;
	cin>>g>>h>>j;
    if (j>e){
        cout<<"yes";
    } else if (j<e){
        cout<<"no";
    } else if (j==e){
        if (h>f){
            cout<<"yes";
        } else if (h<e){
            cout<<"no";
        } else if (h==f){
            if (g>d){
                cout<<"yes";
            } else if (g<d){
                cout<<"no";
            } else if (g==d){
                cout<<"no";
            }
        }
    }
	return 0;
}
