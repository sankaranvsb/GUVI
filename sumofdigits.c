#include<stdio.h>
int main()
{
int no,sum=0,rem=0;
scanf("%d",&no);
while(no!=0)
{rem=no%10;
no=no/10;
sum=sum+rem;
}
printf("%d",sum);
return 0;
}
