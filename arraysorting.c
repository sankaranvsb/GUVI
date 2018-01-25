#include<stdio.h>
int main()
{
int a[10000],i,n,temp,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
for(j=i+1;j<n;i++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}
for(i=1;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
} 
