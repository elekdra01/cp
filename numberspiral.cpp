#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll y,x;
        cin>>x>>y;
        x=x-1;
        y=y-1;
        ll m=max(x,y);
        ll v=m*m;
        if(m%2==0)
        {   if(m==x)
        {
            v+=y+1;

        }
        else{
            v+=2*y-x+1;
        }

        }
        else{
           if(m==x)
        {
            v+=2*x-y+1;

        }
        else{
            v+=x+1;
        }

        }
        cout<<v<<endl;;
    }
}