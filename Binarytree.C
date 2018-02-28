#include<stdio.h>
#include<stdlib.h>

struct node
{
 char info;
 struct node *left;
 struct node *right;
}*start=NULL;

void inserta()
{
  struct node *temp, *ptr;
  int flag=2, c, count=0;
  temp= (struct node *)malloc (sizeof(struct node));
    printf("Enter info");
	scanf("%s",&temp->info);
	temp->left=NULL;
	temp->right=NULL;
 if(start==NULL)
 {
  start=temp;
  }
 else
 {
 	ptr=start;


 while(flag==2)
 {
 	printf("You are at level %d",++count);
 printf("\nEnter 1 for left and 2 for right");
  scanf("%d",&c);
   if(c==1)
 {
 	if(ptr->left==NULL)
 	{
 		flag=3;
	 ptr->left=temp;
	 exit;
    }
 	else
 	ptr=ptr->left;
 }
 if(c==2)
 {
 	if(ptr->right==NULL)
 	{
	 flag=3;
	 ptr->right=temp;
	 exit;
    }
 	else
 	ptr=ptr->right;
 }

 }
}
}

//traverse the tree in preorder
void preorder(struct node *ptr)
{
 if(ptr!=NULL)
 {
  printf("%c\t",ptr->info);
  preorder(ptr->left);
  preorder(ptr->right);
 }
}


main()
{
int abc=1;
struct node *ptr;
ptr=start;
 while(abc==1)
 {
 inserta();
 printf("\nenter choice as 1 if node is to be inserted ");
 scanf("%d",&abc);

}
printf("\n") ;
preorder(start);
 }
