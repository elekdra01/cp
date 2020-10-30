#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
string s;
cin>>s;
int n=s.length();
map<char,int>my;
for(int i=0;i<n;i++)
{
    my[s[i]]++;
}
int count=0;
map<char,int>::iterator itr;
for(itr=my.begin();itr!=my.end();itr++)
{
    if(itr->second%2==0)
    {
        count+=itr->second;
    }
}
if(count==n || count==n-1)
{
    cout<<"palindrome string"<<endl;
}
else{
    cout<<"not palindrome"<<endl;
}
}