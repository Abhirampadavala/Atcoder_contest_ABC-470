#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,Q;
	cin>>N>>Q;
	
	vector<int>first(N+1);
	vector<int>second(N+1);
	for(int i=1;i<N+1;i++)
	{
	    cin>>first[i];
	    second[first[i]]=i;
	}
	
	for(int j=0;j<Q;j++)
	{
	    int i;
	    cin>>i;
	    if(i==1)
	    {
	        int x,y;
	        cin>>x>>y;
	       swap(first[x],first[y]);
	       swap(second[first[x]],second[first[y]]);
	    }
	    else
	    {
	       swap(first,second);
	    }
	}
	
	for(int p=1;p<=N;p++)
	{
	    cout<<first[p]<<" ";
	}
  return 0;
}
