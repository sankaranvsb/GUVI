#include<stdio.h>
int main()
{int no,a,b,count=0;
printf("enter the no");
scanf("%d",&no);
printf("\nenter the limit");
scanf("%d\t%d",&a,&b);
for(int i=a;i<b;i++)
{
if(i==no)
{
count=1;
}
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
