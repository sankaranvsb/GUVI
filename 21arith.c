#include <stdio.h>
int main()
{
int a,b,c,temp=0;
printf("enter the no elements in ap");
scanf("%d",&a);
printf("enter the starting in ap");
scanf("%d",&b);
printf("enter the difference in ap");
scanf("%d",&c);
for(int i=0;i<a;i++)
{
    temp=temp+b;
    b=b+c;
}
printf("%d",temp);
    return 0;
}
