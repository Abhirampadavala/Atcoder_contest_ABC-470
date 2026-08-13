#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,Q;
	cin>>N>>Q;
	vector<int>a(N,0);
	vector<pair<int,int>>query(Q);
	
	int xor_sum=0;
	set<int>b;
	
	for(int i=0;i<Q;i++)
	{
	    cin>>query[i].first;
	    if(query[i].first==2) 
	    {
	      query[i].second=-1;
	          for(int i=0;i<b.size();i++)
	          {
	                  xor_sum^=a[b[i]];
	                  a[b[i]]--;
	                  if(a[b[i]]<1)
	                  {
	                      b.remove(b[i]);
	                  }
	                  xor_sum^=a[b[i]];
	          }
	          cout<< xor_sum<<endl;
	    }
	    else 
	    {
	        cin>>query[i].second;
	        xor_sum^=a[query[i].second-1];
	        a[query[i].second-1]++;
	        
	        b.push(query[i].second-1);
	        
	        xor_sum^=a[query[i].second-1];
	        cout<<xor_sum<<endl;
	    }
	}
  return 0;
}
