#include<stdio.h>
int main()
{
int i,j,k,l,m,n,o,w=0,flag,q,p;
char s[10];
printf("Enter string");
gets(s);
printf("Enter no. of queries");
scanf("%d",&q);
while(w<q)
{ flag=0;
printf("Enter values");
scanf("%d%d%d%d",&i,&j,&k,&l);
o=(i+j)/2;
for(m=i;m<0;m++)
 { char temp=s[m-1];
   s[m-1]==s[j-1];
   s[j-1]=temp;
   j--;
 }
 puts(s);
 p=(l+k)/2;
 for(m=k;m<=p;m++)
  { if(s[m-1]!=s[l-1])
    flag=1;
    l--;}
    if(flag==0)
    printf("palindrome \n");
    if(flag==1)
    printf("not palindrome \n");
    w++;}
    return 0;
    }
