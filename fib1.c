#include<stdio.h>
int main()
{
int a=0,b=1,no,temp=0,sum=0;
scanf("%d",&no);
printf("%d\t%d",a,b);
for(int i=2;i<no;i++)
{
temp=a;
a=b;
b=temp;
sum=a+b;
printf("%d",sum);
}
return 0;
}
