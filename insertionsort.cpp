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
    
    for(int i=1;i<n;i++)
    {int j=i-1;
        while(arr[i]>=arr[j])
        {
            int temp=arr[i];arr[i]=arr[j];arr[j]=temp;
            i--;
            j--;

        }
    }

        for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<endl;
    }
}