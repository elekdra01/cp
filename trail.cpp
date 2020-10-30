
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,fact=1;
cin>>n;
for(int i=2;i<=n;i++)
{
fact*=i;
}
string s=to_string(fact);
int len=s.size();
int c=0;
for(int j=len-1;j>=0;j--)
{
if(s[j]=='0')
{
c+=1;
}
else{
	cout<<"count of trailing zeroes"<<c<<endl;
break;
}
}
}