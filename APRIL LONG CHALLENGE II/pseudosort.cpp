#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int c=0,f=0,s=0;
	    for(int i=1;i<=n-1;i++){
	        if(a[i]<a[i-1]){
	            c++;
	            f=i;
	            s=i-1;
	        }
	    }
	    if(c>2){
	        cout<<"NO"<<endl;
	    }else if(c==0){
	        cout<<"YES"<<endl;
	    }else if(c==1){
	        int temp=a[s];
	        a[s]=a[f];
	        a[f]=temp;
	        c=0;
	        for(int i=1;i<n;i++){
    	        if(a[i]<a[i-1]){
    	            c++;
    	        }
	    }
	    if(c==0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}else if(c==2){
	        int temp=a[s];
	        a[s]=a[f];
	        a[f]=temp;
	        c=0;
	        for(int i=1;i<n;i++){
    	        if(a[i]<a[i-1]){
    	            c++;
    	        }
	    }
	    if(c==0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	}
	return 0;
}
