#include<bits/stdc++.h>
using namespace std;
void query(vector <int> &a, int l ,int r, int x)
{
    a[l]=a[l]+x;
    a[r+1]=a[r+1]-x;
    cout<<l<<a[l]<<endl;
    cout<<r+1<<a[r+1]<<endl;
}
vector <int> initializediff(vector <int> &a)
{
    int n=a.size();
    
    vector<int> diff(n+1);
    
    diff[0]=a[0];
    diff[n]=0;
    
    for(int i=0;i<n;i++)
    {
        diff[i]=a[i]-a[i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<diff[i];
    }
    return diff;
}
int main()
{
    cout<<"Enter the size of array : "; 
    int n;
    cin>>n;// size of array
    vector <int> a(n);
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++)
    {
       cin>>a[i];  // Elements of the array
    } 
    vector <int> diff=initializediff(a);
    cout<<"Enter the number of Query : "; 
    int q;
    cin>>q; 
    int l,r,x;
    for(int i=0;i<q;i++)
    {
        cout<<"Enter the left index - right index - number to add : ";
        cin>>l>>r>>x;
        query(diff,l,r,x); 
          }
    cout<<"Answer : ";
    for(int i=0;i<a.size();i++)
    {
        if(i==0)
        {
            a[i]=diff[i];
        }
        else
        {
            a[i]=diff[i]+a[i-1]; //Step 3;
        }
        
        cout<<a[i]<<" ";
    }   
    return 0;
}
