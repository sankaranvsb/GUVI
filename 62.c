#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int n,count=0;
scanf("%d",&a);
n=strlen(a);
for(int i=0;i<n;i++)
{
if(a[i]==0 || a[i]==1)
{
count++;
}
}
if(n==count)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
