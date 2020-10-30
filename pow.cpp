#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x,y;
    cin>>x>>y;
    int res=1;
    while(res<y)
    {
        res=res*x;
    }
    if(res==y)
    {
        cout<<"power"<<endl;
    }
    else{
        cout<<"not power"<<endl;
    }
}