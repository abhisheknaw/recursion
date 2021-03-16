#include <bits/stdc++.h>
using namespace std;
void insert(stack<int>&s,int temp)
{
	if(s.size()==0 || s.top()<=temp)
	{
		s.push(temp);                  //base condition            
		return;
	}
	int val=s.top();
	s.pop();
	insert(s,temp);                         //hypothesis
	s.push(val);                       //induction
	return;
}
void sort(stack<int>&s)
{
	if(s.size()==1)
	{
		return;                     //base condition
	}
	int temp= s.top();     
	s.pop();
	sort(s);                        //hypothesis
	insert(s,temp);                 //induction
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
	int n,temp;
	cin>>n;
	stack<int>s;
	for(int i=0;i<n;i++)
	{
        cin>>temp;
		s.push(temp);
	}
	sort(s);
	for (int i=0;i<n;i++)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
