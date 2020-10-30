#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
string s;
cin>>s;
int n=s.length();
if(n>128)
    cout<<"duplicate"<<endl;
else
{
bool arr[128]={0};
for(int i=0;i<n;i++)
{
    if(arr[s[i]]==true){
        cout<<"duplicate"<<endl;
        break;
}
arr[s[i]]=true;
}

cout<<"unique string"<<endl;
}
}