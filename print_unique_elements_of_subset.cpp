#include <bits/stdc++.h>
using namespace std;
void solve(string ip,string op,map<string,int>&m)
{
	if(ip.length()==0)
	{
		m[op]++;
		if(m[op]==1)
			cout<<op<<" ";
		return;
	}
	string op1= op;
	string op2 = op;
	op2.push_back(ip[0]);
	
	ip.erase(ip.begin()+0);
	solve(ip,op1,m);
	solve(ip,op2,m);
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
	string op=" ";
	string ip;
	cin>>ip;
	map<string,int>m;
	set<string>s;
	solve(ip,op,m);
	return 0;
}