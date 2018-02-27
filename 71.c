#include<stdio.h>
#include<string.h>
int main()
{int no;
char a[20],b[20];
scanf("%s",&a);
strcpy(b,a);
strrev(a);
no=strcmp(a,b);
if(no==0)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
return 0;
}
