#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	vector<int>color(N);
	vector<int>hashmap(N+1,0);
	for(int i=0;i<N;i++)
	{
	    cin>>color[i];
	    hashmap[color[i]]++;
	}
	
    int max_freq=-1;
	for(int j=1;j<N+1;j++)
	{
	    max_freq=max(max_freq,hashmap[j]);
	}
	
	int ans=N-max_freq;
	cout<<ans<<endl;
  return 0;
}
