#include<stdio.h>
int main()
{
int a,b,i,sum,rem,temp;
scanf("%d%d",&a,&b);

for(i=a+1;i<b;i++)
{
temp=i;
sum=0;
while(temp!=0)
{
rem=temp%10;
sum=sum+rem*rem*rem;
sum=sum/10;
}
if(temp==sum)
printf("%d",sum);
}
  return 0;
}
