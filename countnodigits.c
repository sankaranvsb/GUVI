#include<stdio.h>
int main()
{
int no,count=0;
scanf("%d",&no);
while(no!=0)
{
no=no/10;
count++;
}
printf("%d",count);
return 0;
}
