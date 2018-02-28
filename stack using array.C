#include<stdio.h>
int A[10];
int top=-1;
void push(int x)
{
  if(top==9)
  printf("Overflow");
  else
  {
    top=top+1;
    A[top]=x;
  }
}

void pop()
{
  if(top==-1)
  printf("Underflow");
  else
  { A[top]=0;
    top=top-1;
    }
}

int topp()
{
  return A[top];
}

void display()
{
int i;
printf("Stack: ");
for(i=0;i<=10;i++)
{
printf("%d ",A[i]);
}
printf("\n");
}

int main()
{ /*
int choice=1,ch,x;
do
{
 printf("Press 1 to push and enter x, 2 to pop, 3 for top, 4 to display");
 scanf("%d%d",&ch,&x);
 switch(ch)
 {
   case 1: push(x); break;
   case 2: pop(); break;
   case 3: topp(); break;
   case 4: display();
   }
   printf("Press 1 to continue");
   scanf("%d",&choice);
  }while(choice==1); */
  push(1);
  display();
  push(2);
  display();
  push(3);
  display();
  topp();
  display();
  pop();
  display();
  pop();
  display();
  push(4);
  display();
  pop();
  display();
   return 0;
 }
