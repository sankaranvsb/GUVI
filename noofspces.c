#include<stdio.h>
int main()
{char a[100];
int count,i;
scanf("%s",&a);
for(i=0;i!='\0';i++)
{
if(a[i]==" ")
{count++;
}}
printf("%d",count);
return 0;
}
