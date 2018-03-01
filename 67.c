#include<stdio.h>
int main()
{
int no,a=1,rem=0;
scanf("%d",&no);
if(no>0 && no<10)
{
printf("10");
}
else
{
no=no/10;
rem=no%10;
if(rem>=1 &&rem<=5)
{
a=a+2;
no=a*10;
printf("%d",no);
}
else
{
a++;
no=a*10;
printf("%d",no);
}}
return 0;
}
