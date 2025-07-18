#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string str;
	cin>>str;
	cout<<str<<endl;;;;
	for (int i=0;str[i]!='\0';i++){
	    if(islower(str[i])){
	        str[i]=toupper(str[i]);
	    }
	    else str[i]=tolower(str[i]);
	}
	
	cout<<str;

}
