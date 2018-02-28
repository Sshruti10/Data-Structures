#include<stdio.h>
#include<stdlib.h>
struct node
{
   int info;
   struct node *frwd;
   struct node *bck;
}*start=NULL,*end=NULL;

 void create();
 void insbeg();
 void displayb();
 void displaye();
 int main()
 {
  int ch,choice=1;
   do
   { printf("Enter 1 for creation,2 for insbeg,3 for displayb, 4 for displaye");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1: create(); break;
     case 2: insbeg(); break;
     case 3: displayb(); break;
     case 4: displaye(); break;
     default: break;
     }
     printf("\nPress 1 to continue");
     scanf("%d",&choice);
     }while(choice==1);
  return 0;
}

void create()
{ struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter info");
  scanf("%d",&temp->info);
  temp->frwd=NULL;
  temp->bck=NULL;
  if(start==NULL)
  {
   start=temp;
   end=temp;
   }
  else
  {
    end->frwd=temp;
    temp->bck=end;
    end=temp;
    }
}

void insbeg()
{ struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter info");
  scanf("%d",&temp->info);
  temp->frwd=NULL;
  temp->bck=NULL;
  if(start==NULL)
  {
   start=temp;
   end=temp;
   }
   else
   {temp->frwd=start;
    start->bck=temp;
    start=temp;
   }
  }

void displayb()
{
 struct node *ptr;
 printf("/nList is ");
 ptr=start;
 while(ptr!=NULL)
 {
   printf("%d",ptr->info);
   printf(" ");
   ptr=ptr->frwd;
   }
}
void displaye()
{
 struct node *str;
 printf("/nList is ");
 str=end;
 while(str!=NULL)
 {
  printf("%d",str->info);
  printf(" ");
  str=str->bck;
 }
}
