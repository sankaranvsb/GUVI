#include<stdio.h>
int main()
{
int a=5,b=6;
printf("before swap %d\t%d",a,b);
a=a ^ b;
b=a ^ b;
a=a ^ b;
printf("after swap %d\t%d",a,b);
return 0;
}
