#include<stdio.h>
#include<ctype.h>
char stack[20];
int top = -1;
int evaluation();
void conversion();
void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int prefrence(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}

int main()
{
int ch,choice=1;
do
{
printf("Press 1 for evaluation and 2 for conversion");
scanf("%d",&ch);
switch(ch)
{
case 1: evaluation();  break;
case 2: conversion();  break;
}
printf("Press 1 to continue");
scanf("%d",&ch);
}while(choice==1);
return 0;
}

int evaluation()
{    char expression[20];
        int i=0;
        int n1,n2,n3,num;
        printf("Enter the expression :: ");
        scanf("%s",expression);
        while(expression[i] != '\0')
        {
                if(isdigit(expression[i]))
                {
                        num = expression[i] -48;;
                        push(num);
                }
                else
                {
                        n1 = pop();
                        n2 = pop();
                        switch(expression[i])
                        {
                                case '+':
                                {
                                        n3 = n1 + n2;
                 						   break;
                                }
                                case '-':
                                {
                                        n3 = n2 - n1;
                                        break;
                                }
                                case '*':
                                {
                                        n3 = n1 * n2;
                                        break;
                                }
                                case '/':
                                {
                                        n3 = n2 / n1;
                                        break;
                                }
                        }
                        push(n3);
                }
                i++;
        }
        printf("\nThe result of expression %s  =  %d\n\n",expression,pop());
        return 0;

}

void conversion()
{
char exp[20];
    char *a, x;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    a = exp;
    while(*a != '\0')
    {
        if(isalnum(*a))
            printf("%c",*a);
        else if(*a == '(')
            push(*a);
        else if(*a == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(prefrence(stack[top]) >= prefrence(*a))
                printf("%c",pop());
            push(*a);
        }
        a++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }

}

