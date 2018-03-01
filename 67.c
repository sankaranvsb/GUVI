#include<stdio.h>
int main()
{
int n,a=1,rem=0;
scanf("%d",&n);
if(n>0 && n<10)
{
printf("10");
}
else
{
n=n/10;
rem=n%10;
if(rem>=1 &&rem<=5)
{
a=a+2;
n=a*10;
printf("%d",n);
}
else
{
a++;
n=a*10;
printf("%d",n);
}}
return 0;
}
