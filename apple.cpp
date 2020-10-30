#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int>arr;
int n,x,s=0;
cin>>n;
for(int i=0;i<n;i++)
{   cin>>x;
    arr.emplace_back(x);
    s+=x;
}

int v=pow(2,n)-1;
int sum;
int minimum;
int maxmi=INT_MAX;
for(int i=1;i<=v;i++){
    string bit = bitset<3> (i).to_string(); 
    sum=0;
    cout<<bit<<endl;
    for(int j=bit.length()-1;j>=0;j--)
    {
        if(bit[j]==1)
        {
            sum+=arr[j];
        }

    }
    cout<<sum<<endl;
    minimum=abs(s-sum-sum);
    minimum=min(minimum,maxmi);
}
cout<<minimum<<endl;
}