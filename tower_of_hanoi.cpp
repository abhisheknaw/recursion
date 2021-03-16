#include <bits/stdc++.h>
using namespace std;
void toh(string s,string d,string h,int n,int &count)
{
	count++;
	if(n==1)
	{
		cout<<"moving plate "<< n <<" from "<<s <<" to "<< d<<endl;
		return;
	}
	toh(s,h,d,n-1,count);
	cout<<"moving plate "<< n <<" from "<<s <<" to "<< d<<endl;
	toh(h,d,s,n-1,count);
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
	string s="source";
	string h="helper";
	string d="destination";
	int n;
	cin>>n;
	int count=0;
	toh(s,d,h,n,count);
	cout<<count;
	
	return 0;
}
