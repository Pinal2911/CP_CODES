#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int valA=(a*100)/10;
	    int valB=(b*100)/20;
	   
	    if(valA>valB){
	        cout<<"FIRST"<<endl;
	    }else if(valB>valA){
	        cout<<"SECOND"<<endl;
	    }else{
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}
