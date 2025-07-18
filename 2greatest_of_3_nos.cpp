#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a>=b &&a>=c)
	{
	    cout<<a<<" is greatest";
	}
	else if(b>=c &&b>=a)
	{
	    cout<<b<<" is greatest";
	}
	else cout<<c<<" is greatest";
}
