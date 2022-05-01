#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int win=3*(n-1);
	    int lose=(n-1)/2;
	    lose=lose*3;
	    cout<<win-lose<<endl;
	}
	return 0;
}
