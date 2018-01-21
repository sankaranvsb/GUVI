#include<stdio.h>
int main()
{
int a,b,i,count=0;
scanf("%d",&a);

for(i=1;i<10000;i++)
{
if(a%i==0)
count++;
}
if(count==2)
printf("%d is prime\n",a);
else
printf("%d is not prime\n",a);
  return 0;
}
