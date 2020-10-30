#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {   int x;
        cin>>x;
        arr[i][j]=x;
    }
}
for(int i=0;i<n/2;i++)
{
    int f=i;
    int l=n-1-i;
    for(int j=f;j<l;j++)
    {
        int offset=j-f;
        int top=arr[f][j];
        arr[f][j]=arr[l-offset][f];
        arr[l-offset][f]=arr[l][l-offset];
        arr[l][l-offset]=arr[j][l];
        arr[j][l]=top;
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    { cout<<arr[i][j]<<" ";

}cout<<"\n";
}
}