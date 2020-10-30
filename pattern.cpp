#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l=2*n-1;
    int arr[l][l];
    for(int i=0;i<=l/2;i++)
    {
        for(int j=i;j<l-i;j++)
        {   
            arr[i][j]=n;
            arr[j][i]=n;
            arr[l-i-1][j]=n;
            arr[j][l-i-1]=n;
        }
        n--;
    }
     for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}