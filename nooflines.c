#include<stdio.h>
int main()
{
char a[88];
int i,count=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{if(a[i]=='.')
count++;
}
printf("%d",count);
return 0;
}
