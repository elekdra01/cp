#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int minim=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minim])
            {
                minim=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minim];
        arr[minim]=temp;
    }
        for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<endl;
    }

}