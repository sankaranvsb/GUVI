#include<stdio.h>
int main()
{
int a[4],i;
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
printf("%d%d\n",a[i],i);
}
return 0;
}
