#include <bits/stdc++.h>
using namespace std;
void solve(string ip,string op)
{
	if(ip.length()==0)
	{
		cout<<op<<endl;
		return;
	}
	if(isalpha(ip[0]))
	{
		string op1=op;
		string op2=op;

		op1.push_back(tolower(ip[0]));
		op2.push_back(toupper(ip[0]));

		ip.erase(ip.begin()+0);

		solve(ip,op1);
		solve(ip,op2);
	}
	else
	{
		string op1=op;
		op1.push_back(ip[0]);

		ip.erase(ip.begin()+0);
		solve(ip,op1);
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
	string ip;
	string op=" ";
	cin>>ip;
	solve(ip,op);
	return 0;
}