#include<stdio.h>
int main()
{
char a[88];
int i,no=0,alpha=0,spl=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
{
no++;
}
else if(a[i]>='a' && a[i]<='z')
{
alpha++;
}
else
{
spl++;
}}
if(no>=1 && alpha>=1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
