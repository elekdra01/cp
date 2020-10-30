#include<bits/stdc++.h>
using namespace std;
void validip(string ip)
{
int len=ip.size();
cout<<len<<endl;
int flag=0;
int i=0;
if(len>15)
{
cout<<"INVALID"<<endl;
}
else
{
while(i<len)
{
if(isalpha(ip[i]))
{
cout<<"INVALID"<<endl;
break;
}
else
{
string s="";
for(int i=0;i<len;i++)
{
if(s[i]!='.')
{
s+=s[i];
i++;
}
else{
if(stoi(s)<=255)
{
	flag=1;
s="";
i++;
}
else{
flag=0;
cout<<"INVALID"<<endl;
break;
}
}
}
if(flag==1)
{
cout<<"VALID"<<endl;
}
}
}
}
}
int main()
{
string n;
cin>>n;
validip(n);
return 0;
}