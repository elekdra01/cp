	#include<bits/stdc++.h>
	using namespace std;
	int main()
{
int n;
cin>>n;
int sum=0;
vector<int>ar(n);
for(int i=0;i<n;i++)
{
int x;
cin>>x;
ar.push_back(x);
if(x%2==0)
{
sum+=x;
}
}

cout<<"sum is "<<sum<<endl;
}