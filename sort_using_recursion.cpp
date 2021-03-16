#include <bits/stdc++.h>
using namespace std;
void insert(vector<int>&v,int temp)
{
	if(v.size()==0 || v[v.size()-1]<=temp)
	{
		v.push_back(temp);                  //base condition            
		return;
	}
	int val=v[v.size()-1];
	v.pop_back();
	insert(v,temp);                         //hypothesis
	v.push_back(val);                       //induction
	return;
}
void sort(vector<int>&v)
{
	if(v.size()==1)
	{
		return;                     //base condition
	}
	int temp= v[v.size()-1];     
	v.pop_back();
	sort(v);                        //hypothesis
	insert(v,temp);                 //induction
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
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v);
	for (int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
