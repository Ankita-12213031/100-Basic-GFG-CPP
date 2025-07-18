#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
string str;
cin>>str;
string res;

for (int i=0;str[i]!='\0';i++)
{
    if((isalpha(str[i])))
    {
        res+=str[i];
    }
}
cout<<"string with alphabets no extra characters "<<res;

}
