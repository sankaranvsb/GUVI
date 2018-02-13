#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int n;
gets(a);
n=strlen(a);
for(int i=0;i<n;i++)
{
printf("%c",a[i]);
}
return 0;
}
