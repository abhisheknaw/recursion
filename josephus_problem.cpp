#include <bits/stdc++.h>
using namespace std;
void josephus(vector<int>&v,int k,int index,int &answer)
{
	if(v.size()==1)
	{
		answer=v[0];
		return;
	}

	index= (index+k)%v.size();
	v.erase(v.begin()+index);
	josephus(v,k,index,answer);
}

int main() 
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int n,k;
	cin>>n>>k;
	int answer=-1;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		v[i]=i+1;
	}
	int index=0;
	josephus(v,k-1,index,answer);
	cout<<answer;
	return 0;
}