#include<bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    int n;
    cin>>str;
    n=str.length();
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[str[i]]++;
    }
    string s="",st="";
    map<char,int>::iterator itr;
    int c=0;
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        if(itr->second%2==1)
        {   for(int j=0;j<(itr->second);j++)
            {
            st+=itr->first;
            }
            c+=1;
            if(c>1)
            {
                cout<<"NO SOLUTION"<<endl;
                st="";
                s="";
                break;
            }
        }
        else{
        for(int j=0;j<(itr->second)/2;j++)
        {
            s+=itr->first;
        }
    }}
    string r=string(s.rbegin(),s.rend());
    s+=st+r;
    cout<<s<<endl;
}