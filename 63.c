#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int n,count=1;
gets(a);
n=strlen(a);
for(int i=0;i<n;i++)
{
if(a[i]==' ')
{
count++;
}
}
printf("%d",count);
return 0;
}
