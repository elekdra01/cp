#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    int r=1;
    for(int i=1;i<=x;i++)
    {
        r*=i;
    }
    return r;
}
int ncr(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int space=0;space<n-i;space++)
        {
            cout<<"   ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<ncr(i,j)<<"    ";

        }
        cout<<endl;
    }
}