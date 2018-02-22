#include<stdio.h>
int main()
{
int k,n,temp=0,r=0,s=1;
scanf("%d",&n);
printf("%d\t%d\t",r,s);
for(k=2;k<n;k++)
{
temp=r+s;
r=s;
s=temp;
printf("%d\t",temp);
}
return 0;
} 

