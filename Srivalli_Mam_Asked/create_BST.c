#include<stdio.h>
#include<stdlib.h>

void create_BST(int ele)
{
	node *ptr=(node*)malloc(sizeof(node));
	ptr->data=ele;
	ptr->left=NULL;
	ptr->right=NULL;
	if(root==NULL)
	{
		root=ptr;
	}
	else
	{
		node *t1=root,*t2;
		while(t1!=NULL)
		{
			if(ptr->data>t1->data)
			{
				t2=t1;
				t1=t1->right;
			}
			else if(ptr->data<t1->data)
			{
				t2=t1;
				t1=t1->left;
			}
		}
		if(ptr->data>t2->data)
		{
			t2->right=ptr;
		}
		else
		{
			t2->left=ptr;
		}
	}
		
}
void inorder(node *temp)
{
	if(temp==NULL)
	return;
	inorder(temp->left);
	printf("%d\n",temp->data);
	inorder(temp->right);
}
void preorder(node *temp)
{
	if(temp==NULL)
	return;
	printf("%d\n",temp->data);
	preorder(temp->left);
	preorder(temp->right);		
}
void postorder(node *temp)
{
	if(temp==NULL)
	return;
	postorder(temp->left);
	postorder(temp->right);
	printf("%d\n",temp->data);	
}
