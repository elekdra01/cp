#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin>>n;
    map<ll,ll>mymap;
    for(ll i=1;i<=n;i++)
    {   
    mymap[i]=0;
    }
    for(ll i=0;i<n-1;i++)
    {   cin>>x;
        mymap[x]=1;
    }
    map<ll,ll>::iterator itr;
    for(itr=mymap.begin();itr!=mymap.end();itr++)
    {
        if(itr->second==0)
            cout<<itr->first<<endl;
    }

}