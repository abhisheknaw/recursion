#include <bits/stdc++.h>
using namespace std;
int print(int n)
{
	if(n<=0)
	    return -1;
	cout<<n<<endl;
	print(n-1);
	return 0;
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
	print(n);
	return 0;
}	