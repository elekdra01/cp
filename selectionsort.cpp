#include<bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,temp;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int minvalue=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minvalue])
            {
                minvalue=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minvalue];
        arr[minvalue]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}