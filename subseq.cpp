#include<bits/stdc++.h>
using namespace std;
vector<string> subseq(string s)
{
    vector<string>arr;
    if(s.length()==0)
        return arr.push_back("0");
    char ch=s[0];
    string ros=s.substr(1);
    vector<string>myres;
    vector<string>fin;
    fin=subseq(ros);
    for(auto x:fin)
    {
        myres.push_back(x);
        myres.push_back(ch+x);
    }
    
    
}
int main()
{
string s;
cin>>s;
vector<string>ans;
ans=subseq(s);
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}
}