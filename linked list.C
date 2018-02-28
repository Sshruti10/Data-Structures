#include<stdio.h>
#include<stdlib.h>
struct node
{
char name[10];
int number;
float price;
struct node*link;
}*start=NULL;
int create();
int insertion();
int display();

int main()
{
char ans='Y';
int a;
while(ans=='y'||ans=='Y')
{ printf("Enter your choice \n");
  printf("Press 1 for insertion \n");
  printf("Press 2 for display \n");
  printf("Press 3 for creation\n");
  scanf("%d",&a);
  switch(a)
  { case 1: insertion();
            break;
    case 2: display();
            break;
    case 3: create();
            break;
            }
    printf("To continue press y ");
    scanf("%d",&ans);
    }
    return 0;
}
    int create()
    {
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter info");
    scanf("%s",temp->name);
    scanf("%d,%f",&temp->number,&temp->price);
    temp->link=NULL;
    if(start==NULL)
    start=temp;
    else
    { ptr=start;
      while(ptr->link!=NULL)
      {ptr=ptr->link;
      ptr->link=temp;}
      return 0;
      }
      }

    int insertion()
    {
      struct node*temp,*ptr;
      int pos,count=1;
      temp=(struct node*)malloc(sizeof(struct node));
      printf("Enter the details");
      scanf("%s",temp->name);
      scanf("%d%f",&temp->number,&temp->price);
      temp->link=NULL;
      ptr=start;
      printf("Enter the position");
      scanf("%d",&pos);
      while(/*ptr->link=NULL&&*/count<pos-1)
      { ptr=ptr->link;
        count++;
        }
        if(count==pos-1)
        {temp->link=ptr->link;
         ptr->link=temp;}
         return 0;
    }

    int display()
    {
    struct node*ptr;
    if(start=='\0')
     printf("Empty list");
     else
      { ptr=start;
        while(ptr!='\0')
        { puts(ptr->name);
        printf("%d%f",ptr->number,ptr->price);
        ptr=ptr->link;
        }
        }
        return 0;
    }
