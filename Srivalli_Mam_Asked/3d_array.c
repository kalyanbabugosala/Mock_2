#include<stdio.h>
#include<stdlib.h>
//#include<string.h>

struct array
{
	int arr[4][3][2];

};

typedef struct tree
{
	struct tree *left;
	int data;
	struct tree *right;
}node;
node *root;

int main()
{
	//int (*funpointer)();
	int i,j,k;
	struct array *p = NULL;
				//     int var=ary->a[2][2][2];
	int var;

	p=(struct array*)malloc(sizeof(struct array));
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				p->arr[i][j][k]=rand();	
			}
		
		}
	}
	var=p->arr[2][2][2];
	
	if(var%10 ==0)
	{
		goto pattern;
	}
	pattern: patternchar();
	
	//funpointer = string_compare();
	if(var%2==0)
	{
		string_compare();
		/*create_BST(rand());
		create_BST(rand());
		create_BST(rand());
		create_BST(rand());
		create_BST(rand());
		create_BST(rand());
		create_BST(rand());
		printf("inorder\n");
		inorder(root);
		printf("preorder\n");
		preorder(root);
		printf("postorder\n");
		postorder(root);*/
	}
	else
	{
		create_BST(rand());
		create_BST(rand());
		create_BST(rand());
		create_BST(rand());
		create_BST(rand());
		create_BST(rand());
		create_BST(rand());
		printf("inorder\n");
		inorder(root);
		printf("preorder\n");
		preorder(root);
		printf("postorder\n");
		postorder(root);
	}
	
	
	
	
	
	//printf("The variable is %d",var);
	
	/*printf("The array elements are:");
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("\t");
			for(k=0;k<2;k++)
			{
				printf("%d ",p->arr[i][j][k]);	
			}
		
		}
	}*/
	
	
	
	return 0;
}

