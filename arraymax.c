#include<stdio.h>
int main()
{
int a[10000],i,n,temp,max;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp=a[0];
for(i=1;i<n;i++)
{
if(a[i]>temp)
{
max=a[i];
}}
printf("%d",max);
return 0;
}
