#include<stdio.h>
#include<string.h>
int main()
{int i,no;
char a[100];
scanf("%s",&a);
no=strlen(a);
if(no%2!=0)
{
i=no/2;
a[i]='*';
printf("%s",a);
}
return 0;
}
