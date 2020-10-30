#include<bits/stdc++.h>
using namespace std;
#define ll long long
void insertfun(string s,string t,int l1,int l2)
{
    int c=0;
    int first=0,second=0;
    for(int i=0;i<l2;i++)
    {
        if(s[first]==t[second])
        {
            first++;
            second++;
        }
        else{
            second++;
            c++;
            if(s[first]==t[second])
            {
            first++;
            second++;
            }
        }
    }
    if(c>1)
    {
        cout<<"false";
    }
    else{
        cout<<"true";
    }

}
void deletefun(string s,string t,int l1,int l2)
{
    cout<<"fak"<<endl;
}
void replacefun(string s,string t,int l1,int l2)
{   int c=0;
    for(int i=0;i<l1;i++)
    {   cout<<s[i]<<t[i]<<endl;
        if(s[i]!=t[i])
        {
            c++;
        }
    }
    if(c==1)
    {
        cout<<"true"<<endl;
    }
}
int main()
{
string s,t;
cin>>s>>t;
int n=s.length();
int n2=t.length();
if(n==n2)
{
    replacefun(s,t,n,n2);
}
else if(n==n2+1)
{
 insertfun(s,t,n,n2);
}
else if(n==n2-1)
{
    deletefun(s,t,n,n2);
}
else{
    return false;
}
}