#include <bits/stdc++.h>
using namespace std;
int solve(int n,int k)
{
	if(n==1 && k==1)
		return 0;
	int mid= pow(2, n-1)/2;
	if(k<=mid)
		return solve(n-1,k);
	
	return !solve(n-1,k-mid);

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
	cin>>n;
	cin>>k;
	int a=solve(n,k);
	cout<<a;
	return 0;
}