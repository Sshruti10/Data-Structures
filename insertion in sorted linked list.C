#include<stdio.h>
#include<stdlib.h>
void create();
void insert();
void display();
struct node
{
  int info;
  struct node *link;
 }*start=NULL;
int main()
 {
 int choice=1,ch;
 do
 { printf("Press 1 for creation,2 for insertion,3 for display");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1: create();
            break;
    case 2: insert();
            break;
    case 3: display();
            break;
    default: break;
    }
    printf("To continue press 1");
    scanf("%d",&choice);
    }while(choice==1);
    return 0;
}

void create()
{ int count=1,pos;
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter info of new node");
scanf("%d",&temp->info);
temp->link=NULL;
printf("Enter pos for new node\n");
scanf("%d",&pos);
if(start==NULL&&pos==1)
start=temp;
else if(start->link==NULL&&pos==1)
    {temp->link=start;
     start=temp;}
else
{ ptr=start;
  while(ptr!=NULL&&count<pos-1)
  { count++;
     ptr=ptr->link;
  }
  if(count==pos-1)
   { temp->link=ptr->link;
     ptr->link=temp;
     }
  if(ptr->link==NULL)
    ptr->link=temp;
}
}

void insert()
{
struct node *temp,*ptr,*prev;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter info of new node");
scanf("%d",&temp->info);
temp->link=NULL;
ptr=start;
if(temp->info<ptr->info)
{ temp->link=ptr;
   start=temp;}
else{
while(ptr->link!=NULL&&temp->info>ptr->info)
  { prev=ptr;
    ptr=ptr->link;
    }
    if(ptr->link==NULL)
    ptr->link=temp;

    else
    {
    temp->link=ptr;
    prev->link=temp;
    }
}
}

void display()
{
struct node *ptr;
ptr=start;
while(ptr!=NULL)
{ printf("%d ",ptr->info);
  ptr=ptr->link;
  }
  }
