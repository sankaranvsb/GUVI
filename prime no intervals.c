#include<stdio.h>
int main()
{
int a,b,i,count=0;
scanf("%d%d",&a,&b);
while(a<b)
{
for(i=2;i<b;i++)
{
if(a%i==0)
count++;
  break;
if(count==2)
printf("%d is prime\n",a);
else
printf("%d is not prime\n",a);
}
a++;
}
  return 0;
}
