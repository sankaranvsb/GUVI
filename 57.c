#include<stdio.h>
int main()
{
int r,s,temp=0;
scanf("%d%d",&r,&s);
temp=r;
r=s;
s=temp;
printf("%d\t%d",r,s);
return 0;
} 

