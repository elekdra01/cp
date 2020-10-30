#include <bits/stdc++.h> 
using namespace std; 
int main()
{
	int n;
	cout<<"enter rows"<<endl;
	cin>>n;
	int k=2*n-2;
	for(int i=0;i<n;i++)
	{	
		for(int p=0;p<k;p++)
		{
			cout<<" ";
		}
		int c=0;
		while(c!=2*i+1)
		{
			cout<<"* ";
			c++;
		}
		cout << endl;
		k=k-2;
	}
}

