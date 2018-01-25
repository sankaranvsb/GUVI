#include<stdio.h>
int main()
{
int a[10000],i,n,temp,min;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp=a[0];
for(i=1;i<n;i++)
{
if(a[i]<temp)
{
temp=a[i];
}}
printf("%d",temp);
return 0;
}
