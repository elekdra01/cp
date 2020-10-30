#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
string s;
cin>>s;
int l=s.length();
int c=0;
string st="";
for(int i=1;i<l;i++)
{
    if(s[i]!=s[i-1])
    {   

        c++;
        st+=s[i-1]+to_string(c);
        c=-1;
    }
    c++;
}
st+=s[l-1]+to_string(c+1);
cout<<st<<endl;
}