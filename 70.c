#include<stdio.h>
int main()
{
int a,b;
scanf("%d",&a);
for(int i=1;i<a;i++)
{
b=i*2;
if(b>a)
{
printf("%d",b);
break;
}
}
return 0;
}
