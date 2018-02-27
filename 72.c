#include<stdio.h>
#include<string.h>
int main()
{int no=0;
char a[20];
scanf("%s",&a);
for(int i=0;a[i]!='\0';i++)
{
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' ||a[i]=='u')
{
no++;
}
}
if(no>=1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
