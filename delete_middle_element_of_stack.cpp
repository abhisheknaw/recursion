#include <bits/stdc++.h>
using namespace std;
void del(stack<int>&s,int n)
{
	if(n==1 || s.size()==1)
	{
		s.pop();                         //base condition
		return ;
	}
	int val=s.top();
	s.pop();
	del(s,n-1);                          // hypothesis
	s.push(val);                        // induction
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
	stack<int>s;
	int k;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		int temp;
		cin>>temp;
		s.push(temp);
	}
	int n= (k/2)+1;
	del(s,n);
	while(s.size()!=0)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}	
