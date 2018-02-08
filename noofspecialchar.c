#include<stdio.h>
#include<string.h>
int main()
{
int no,c=0,b=0,splfun=0;
char a[100];
gets(a);
no=strlen(a);
for(int i=0;a[i]<no;i++)
{
if{a[i]=>'0' && a[i]<='9')
{
  c++;
}
else if((a[i]>'a' && a[i]<'z') || (a[i]>'A'  && a[i]<'Z'))
{
b++;
}
else
{
  splfun++;
}
  }
printf("%d",splfun);
return 0;
}
