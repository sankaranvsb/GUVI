#include<stdio.h>
int main()
{
int a,b,i,temp;
scanf("%d%d",&a,&b);
while(a<b)
{
temp=0;
for(i=2;i<a/2;++i)
{
if(a%i==0)
{
temp=1;
break;
}
}
}
if(temp==0)
printf("%d is prime\n",a);
else
printf("%d is not prime\n",a);
  return 0;
}
