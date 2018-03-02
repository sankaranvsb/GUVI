#include<stdio.h>
int main()
{
int c,rem=0,no;
float b;
scanf("%f",&b);
no=b*10;
rem=no%10;
c=no/10;
if(rem>=1 && rem<=4)
{
printf("%d",c);
}
else
{
c=++c;
printf("%d",c);
}
return 0;
}
