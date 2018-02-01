#include<stdio.h>
#include<string.h>
int main()
{
char a[55];
int b,count=0,i,num=0,no=0;
scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {++no;
  }
for(i=0;a[i]!='\0';i++)
{if(a[i]==" ")
{
count++;
num=no-count;
};
}
printf("%d",num);
return 0;
}
