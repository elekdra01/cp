#include<bits/stdc++.h>
using namespace std;
#define ll long long
int divi(int a,int b)
{
    int count=0;
    int sum=b;
    while(sum<=a)
    {
        sum+=b;
        count++;
        cout<<sum<<count<<endl;
    }
    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int res=divi(a,b);
    cout<<res<<endl;
}