#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
struct node
      { int info;
        struct node*link;
       }*start;
int main()
{
start=(struct node*)malloc(sizeof(struct node));
printf("Enter info of node");
scanf("%d",&start->info);
start->link=NULL;
int choice=1;
do
  { insert();
    printf("To enter another node press 1");
    scanf("%d",&choice);
    }while(choice==1);
    display();
    return 0;
}
void insert()
{
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter info of next node");
scanf("%d",&temp->info);
temp->link=NULL;
temp->link=start;
 start=temp;
}
void display()
{
struct node *ptr;
if(start==NULL)
printf("List is empty");
else
{
printf("The linked list is ");
ptr=start;
while(ptr!=NULL)
{ printf("%d ",ptr->info);
  ptr=ptr->link;
   }
}
}
