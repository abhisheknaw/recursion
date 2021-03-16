#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&s,int ele)
{
	if(s.size()==0)
	{
		s.push(ele);
		return;
	}
    int temp=s.top();
    s.pop();
    insert(s,ele);
    s.push(temp);
    return;
}

void reverse(stack<int>&s)
{
	if(s.size()==1)
	{
		return;
	}
	int ele=s.top();
	s.pop();
	reverse(s);
	insert(s,ele);
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
	stack<int>s;
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		s.push(temp);
	}
	reverse(s);
	while(s.size()!=0)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}