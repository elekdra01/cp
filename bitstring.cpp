#include<bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,s=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s=2*s%((int)1e9+7);
    }
    cout<<s<<endl;
}