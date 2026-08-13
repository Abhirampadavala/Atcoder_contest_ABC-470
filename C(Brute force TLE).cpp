#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,Q;
	cin>>N>>Q;
	vector<int>a(N,0);
	vector<pair<int,int>>query(Q);
	
	for(int i=0;i<Q;i++)
	{
	    int xor_sum=0;
	    cin>>query[i].first;
	    if(query[i].first==2) 
	    {
	      query[i].second=-1;
	          for(int i=0;i<N;i++)
	          {
	              if(a[i]>=1) a[i]--;
	          }
	          
	          for(int i=0;i<N;i++)
	          {
	              xor_sum=xor_sum^a[i];
	          }
	          cout<< xor_sum<<endl;
	    }
	    else 
	    {
	        cin>>query[i].second;
	        a[query[i].second-1]++;
	        for(int i=0;i<N;i++)
	          {
	              xor_sum=xor_sum^a[i];
	          }
	        cout<<xor_sum<<endl;
	    }
	}
  return 0;
}
