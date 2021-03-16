#include <bits/stdc++.h>
using namespace std;

void solve(int open,int close,string op,vector<string>&v)
{
	if(open==0 && close==0)
	{
		v.push_back(op);
		return;
	}
	if(open!=0)
	{
		string op1 = op;
		op1.push_back('(');
		solve(open-1,close,op1,v);
	}
	if(open<close)
	{
		string op2 = op;
		op2.push_back(')');
		solve(open,close-1,op2,v);
	}
	return;
}

vector<string>fun(int n)
{
	vector<string>v;
	int open=n;
	int close=n;
	string op=" ";
	solve(open,close,op,v);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	return;
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
	fun(n);
	return 0;
}