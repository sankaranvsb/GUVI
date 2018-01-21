#include<stdio.h>
int main()
{
int no,sum=0,rem,rks;
scanf("%d",&no);
rks=no;
while(no>0)
{ 
rem=no%10;
sum=sum+(rem*rem*rem);
no=no/10;
}
if(rks==sum)
printf("armstrong number");
else
printf("not armstrong number");
return 0;
}
