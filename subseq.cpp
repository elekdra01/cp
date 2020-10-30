#include<bits/stdc++.h>
using namespace std;
vector<string> subseq(string s,string ans)
{
    vector<string>arr;
    if(s.length()==0)
    {
       return arr.push_back(ans);
    }
    subseq(s.substr(1),ans+s[0]);
    subseq(s.substr(1),ans); 
}
int main()
{
string s;
cin>>s;
vector<string>ansa;
ansa=subseq(s,"\0");
for(int i=0;i<ansa.size();i++)
{
    cout<<ansa[i]<<endl;
}
}