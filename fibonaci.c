#include<stdio.h>
int main()
{
int n,t1=0,t2=1,temp=0,i;
scanf("%d",&n);
printf("%d\t%d",t1,t2);
for(i=2;i<n;i++)
{ 
temp=t1+t2;
t1=t2;
t2=temp;
printf("\t%d",temp);
}
return 0;
}
