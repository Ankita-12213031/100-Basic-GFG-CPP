#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	
	cin>>n;
	int a=n;
	//cout<<a;
	int ans=0;
	
	while(n){
	int res=n%10;
	ans=10*ans+res;
	 n=n/10;
	}
	//cout<<ans;
	
	if(ans==a)cout<<"Y";
	else cout<<"N";

}
