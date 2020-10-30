#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr;
    vector<ll>v;
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll sumset=n*(n+1)/2;
    if(sumset%2==1)
        cout<<"NO"<<endl;
    else{
    sumset=sumset/2;
 
    ll s=0, j=0;
    for(ll i=0;i<n;i++)
    {   <n<<endl;
        arr.push_back(i+1);
        if(s==sumset){
                break;
            }
            else{
        if(s<sumset)
        {  
            s+=arr[i];
            v.push_back(arr[i]);
        }
        if(s>sumset){
                    s-=arr[j];
                    j++;
                    v.erase(v.begin(),v.begin()+1);
                    //v.begin()++;
                }
        if(s==sumset){
                break;
            }
            }
    }}
                cout<<"YES"<<endl;
 
                cout<<v.size()<<endl;
                for(ll i=0;i<v.size();i++)
                {
                    arr.erase(std::remove(arr.begin(), arr.end(), v[i]), arr.end());
                    cout<<v[i]<<" ";
                }
                cout<<"\n"<<arr.size()<<endl;
                for(ll i=0;i<arr.size();i++)
                {
                    //arr.erase(std::remove(arr.begin(), arr.end(), v[i]), arr.end());
                    cout<<arr[i]<<" ";
                }
                cout<<arr[7];
}