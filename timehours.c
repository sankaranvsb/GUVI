#include<stdio.h>
int main()
{ int a,hour,min;
scanf("%d",&a);
hour=a/60;
min=a%60;
printf("%d\t%d",hour,min);
return 0;
}
