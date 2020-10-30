#include <iostream>
#include<vector>
using namespace std;
int main() {
	int V , E;
	cin>>V>>E;
	int graph1[V][V];
	for(int i=0;i<V;i++)
	{
	    for(int j=0;j<V;j++)
	    {
	        graph1[i][j] = 0;
	    }
	}
	vector<int> graph2[V] ;
	for(int i=0;i<E;i++)
	{
	    int u,v;
	    cin>>u>>v;
	    graph1[u][v] = 1;
	    graph1[v][u] = 1;
	    graph2[u].push_back(v);
	    graph2[v].push_back(u);
	}
	cout<<"Graph representation using adjacency matrix"<<endl;
	for(int i=0 ; i<V;i++)
	{
	    for(int j=0;j<V;j++)
	    {
	        cout<<graph1[i][j]<<" ";
	    }
	    cout<<endl;
	}
	cout<<"Graph representation using adjacency list"<<endl;
	for(int i=0 ; i<V;i++)
	{
	    cout<<i<<" -> ";
	    for(int j=0;j<graph2[i].size();j++)
	    {
	        cout<<graph2[i][j]<<",";
	    }
	    cout<<endl;
	}
	return 0;
}
