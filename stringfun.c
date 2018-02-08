#include<stdio.h>
#include<string.h>
int main()
{int c,d;
char a[10],b[10];
gets(a);
gets(b);
c=strlen(a);
d=strlen(b);
if(c>d)
{
printf("%s",a);
}
else if(c<d)
{
printf("%s",b);
}
else
{printf("strings are equal");
printf("%s",a);
printf("%s",b);
}
return 0'
}
