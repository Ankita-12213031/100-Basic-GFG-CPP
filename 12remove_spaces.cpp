#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
string str;
getline(cin, str);// Read the entire line including spaces
cout<<str<<endl;
string res;

for (int i=0;str[i]!='\0';i++)
{
    if(str[i]!=' ')
    {
        res+=str[i];
    }
}
cout<<"string without space "<<res;

}
