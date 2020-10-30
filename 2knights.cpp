#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll total=i*i,j=total*(total-1)/2;
        if(i>2)
        {
            j-=4*(i-1)*(i-2);
        }
        cout<<j<<endl;

    }
}