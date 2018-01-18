#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{ printf("%d is big no",a);
}
else if (b>c && b>a)
{
printf("%d is big no",b);
}
else
{
printf("%d is big no",c);
}
}
