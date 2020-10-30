#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
string s="asd fgh hgf    ";
int n;
cin>>n;
int j=s.size()-1;
for(int i=n-1;i>=0;i--)
{
    if(!isspace(s[i]))
    {
        s[j]=s[i];
        j--;
    }
    else{
        s[j]='0';
        s[j-1]='2';
        s[j-2]='%';
        j-=3;
    }
}
cout<<s<<endl;
}