#include<stdio.h>
#include<string.h>
int main()
{
int n,count=0;
scanf("%d",&n);

for(int i=1;i<1000;i++)
{ 
if(a%i==0)
{
count++;
}
}
if(count==2)
{
printf("prime");
}
else
{
printf(" not prime");
}
return 0;
}
