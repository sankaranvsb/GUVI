#include<stdio.h>
int main()
{
int a[10000],k,n=10,temp=0,g;
for(k=0;k<n;k++)
{
scanf("%d",&a[k]);
}
for(k=0;k<n;k++)
{
for(g=k+1;g<n;g++)
{
if(a[k]>a[g])
{
temp=a[k];
a[k]=a[g];
a[g]=temp;
}
}
}
printf("%d",a[n-1]);
return 0;
} 

