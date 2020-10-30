#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
string s,t;
cin>>s;
int n=s.length();
cin>>t;
int n1=t.length();
if(n!=n1)
{
    cout<<"not permutation"<<endl;
}
else{
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
    {
        cout<<"permutation"<<endl;
    }
    else{
        cout<<"not permutation"<<endl;
    }

}
}