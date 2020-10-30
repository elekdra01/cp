#include<bits/stdc++.h>
using namespace std;
int coinpossible(int a,int b)
{
    if(a==0 && b==0)
        return 1;
    if(a<0 || b<0)
        return 0;
    if(a<b)
    {
    return coinpossible(a-1,b-2);
    }
    else{
    return coinpossible(a-2,b-1);
    }
}
int main()
{   
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int a,b;
    cin>>a>>b;
    cout<<((a+b)%3==0 && 2*a>=b && 2*b>=a?"YES":"NO")<<endl;
    
}