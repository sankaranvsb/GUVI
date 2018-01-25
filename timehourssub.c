#include<stdio.h>
int main()
{
int a,b,c,d,hours,minutes;
scanf("%d%d%d%d",&a,&b,&c,&d);
hours=a-c;
minutes=b-d;
printf("%d\t%d",hours,minutes);
return 0;
}
