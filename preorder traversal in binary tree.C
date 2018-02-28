#include<stdio.h>
#include<stdlib.h>

struct node * stack[10];
int top = -1;

void push(struct node * item)
{
	stack[++top] = item;
}

struct node * pop()
{
	return(stack[top--]);
}


struct node
{
	int info;
	struct node *left, *right;
}*root = NULL;

void insert()
{
	struct node *temp, *ptr;
	int ch, proceed = 1;
	while (proceed == 1)

	{
		temp = (struct node*)malloc(sizeof(struct node));
		temp->left = NULL;
		temp->right = NULL;
		puts("Enter info");
		scanf("%d", &temp->info);

		if (root == NULL)
		{
			root = temp;
			// continue;
		}
        else {
		ptr = root;

		while (1)
		{
			printf("Left or right, or you want to stop?\n Press 0 or 1 or 2 respectively");
			scanf("%d", &ch);
			if (ch == 0)
				ptr = ptr->left;
			else if (ch == 1)
				ptr = ptr->right;
			else
				break;
		}

		printf("Left child or right child, Press 0 or 1 respectively");
		scanf("%d", &ch);

		if (ch == 0)
			ptr->left = temp;
		else
			ptr->right = temp;
			}

		puts("Want to continue? Press 1 ");
		scanf("%d", &proceed);
	}

}

void pre()
{
	struct node *ptr;
	ptr = root;
	push(NULL);
	while ( top != -1)
	{
		printf("%5d",ptr->info);
		if (ptr->right != NULL)
			push(ptr->right);
		if (ptr->left == NULL)
			ptr = pop();
		else
			ptr = ptr->left;
	}
}


int main()
{
	insert();
	puts("\n Preorder Traversal");
	pre();
	return 0;
}
