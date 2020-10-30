#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k,d,x;
    vector<int>ar;
    cin>>n;
    cin>>k;
    cin>>d;
    for(int i=0;i<k;i++)
    {   cin>>x;
        ar.push_back(x);
    }
    int first=0,temp;
    for(int i=0;i<k;i++)
    {   temp=ar[i];
        ar[i]=ar[i]-first;
        first=temp;
    }
     for(int i=0;i<k;i++)
    {   cout<<ar[i]<<endl;
    }
}