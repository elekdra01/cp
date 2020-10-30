#include<bits/stdc++.h>
using namespace std;
#define ll long long
int_least32_t main()
{  
    int c=0;
    string res;
    cin>>res;
    int ans=1;
    char l='A';
    cout<<l<<endl;
    for(char d:res)
    {
        if(d==l){
            ++c;
            ans=max(c,ans);
    }
    else{
        l=d;
        c=1;
    }
    }
    cout<<ans<<endl;
}
