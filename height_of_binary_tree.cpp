#include <bits/stdc++.h>
using namespace std;
struct bstnode
{
	int data;
	struct bstnode *left;
	struct bstnode *right;
};
struct bstnode* getnewnode(int data)
{
	struct bstnode *temp = new bstnode();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void insert(bstnode **root,int data)
{
	if(*root==NULL)
	{
		*root=getnewnode(data);
		return;
	}
	bstnode *tvrptr=*root;
	bstnode *srptr=NULL;
	while(tvrptr != NULL)
	{
		srptr=tvrptr;
		if(data<=tvrptr->data)
		{
			tvrptr=tvrptr->left;
		}
		else
		{
			tvrptr=tvrptr->right;
		}

	}
	if(srptr -> data >= data)
	{
		srptr->left=getnewnode(data);
	}
	else
	{
		srptr->right=getnewnode(data);
	}
}
int height(bstnode *root)
{
	if(root==NULL)
	{
		return 0;
	}

	return max(height(root->left),height(root->right))+1;
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
	int n,data;
	bstnode *root=NULL;
    cout<<"enter number of elements?"<<"\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cout<<"enter number:"<<"\n";
    	cin>>data;
    	insert(&root,data);
    }
    int m=height(root);
    cout<<m;
    return 0;
}