#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
string str;
cin>>str;
int vowel=0;
for (int i=0;str[i]!='\0';i++)
{
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
        vowel++;
    }
}
cout<<"vowels "<<vowel;

}
