#include<stdio.h>
int main()
{
int rem,sum=0,rks,num;
scanf("%d",&num);
rks=num;
while(num>0)
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
  if(sum==rks)
    printf("palindrome");
  else
    printf("not palindrome");
return 0;
}
