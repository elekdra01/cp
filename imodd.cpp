
#include<bits/stdc++.h>
using namespace std;
void sumimmediateodd(int arr[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
//cout<<arr[i]<<endl;
if(arr[i]%2==0 )
{

sum+=arr[i];
cout<<arr[i]<<endl;
if(i!=n-1)
{
if(arr[i+1]%2==1)
{
    //cout<<arr[i+1]<<endl;
sum+=arr[i+1];
}
}
}
}
cout<<"sum of even and immediate odd is  "<<sum<<endl;
}
int main()
{
int n;
cin>>n;
int sum=0;
int ar[n];
for(int i=0;i<n;i++)
{
cin>>ar[i];
}
sumimmediateodd(ar,n);
}