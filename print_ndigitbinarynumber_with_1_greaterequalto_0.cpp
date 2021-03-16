#include <bits/stdc++.h>
using namespace std;
void solve(int n,int one,int zero,string op)
{
	if(n==0)
	{
		cout<<op<<endl;
		return;
	}
	string op1=op;
	op1.push_back('1');
	solve(n-1,one+1,zero,op1);
	if(one>zero)
	{
		string op2=op;
		op2.push_back('0');
		solve(n-1,one,zero+1,op2);
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
	int one=0;
	int zero=0;
	string op=" ";
	cin>>n;
	solve(n,one,zero,op);
	return 0;
}
