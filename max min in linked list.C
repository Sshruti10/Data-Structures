#include<stdio.h>
#include<stdlib.h>
struct node {
int info;
struct node *link;
}*start=NULL;
void create();
void display();
void maxmin();
int main()
{
int ch,choice=1;
do{
printf("Press 1 for create, 2 for display, 3 for max and min");
scanf("%d",&ch);
switch(ch)
{
case 1: create(); break;
case 2: display(); break;
case 3: maxmin(); break;
}
printf("\nPress 1 to continue");
scanf("%d",&choice);
} while(choice==1);
return 0;
}

void create()
{
struct node *temp, *ptr;
temp = (struct node*)malloc(sizeof(struct node));
printf("Enter info");
scanf("%d",&temp->info);
temp->link=NULL;
if(start==NULL)
start=temp;
else
{
  ptr = start;
  while(ptr->link!=NULL)
      ptr=ptr->link;
  ptr->link=temp;
  }
}

void display()
{
struct node *ptr;
ptr = start;
while(ptr!=NULL)
{
printf("%d\n",ptr->info);
ptr=ptr->link;
}
}

void maxmin()
{
struct node *ptr;
int max, min;
ptr = start;
max = ptr->info;
min = ptr->info;
while(ptr->link!=NULL)
{
  ptr=ptr->link;
  if(ptr->info > max)
  max= ptr->info;
}
printf("\nMax is %d",max);
while(ptr->link!=NULL)
{
  ptr=ptr->link;
  if(ptr->info < min)
  min = ptr->info;
}
printf("\nMin is %d",min);
}
