#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
string str;
cin>>str;
string res;//new string to store result

for (int i=0;str[i]!='\0';i++)
{
    if(!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
    {
        res+=str[i];
    }
}
cout<<"string without vowels "<<res;

}
