#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,pc=0,nc=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]<0){
	            nc++;
	        }else{
	            pc++;
	        }
	    }
	    if(abs(pc-nc)<2){
	        cout<<"YES"<<endl;
	    }else if(abs(nc-pc)==2 && nc%2==0 && pc%2==0){
	                cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
