#include<stdio.h>
#include<string.h>
int main()
{
char a[55];
int b,count=0,i,num;
scanf("%s",&a);
b=strlen(a);
printf("%d",b);
for(i=0;a[i]!='\0';i++)
{if(a[i]==" ")
{
count++;
num=b-count;
}}
printf("%d",num);
return 0;
}
