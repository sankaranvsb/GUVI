#include <stdio.h>
#include<string.h>
int main(void)
{int count=0,spl=0;
char a[100];
gets(a);
for(int i=0;a[i]!='\0';i++)
{
	if(a[i]>='0' && a[i]<='9')
	{
	count++;
	}
	else if(a[i]>='a' && a[i]<='z')
	{
		count++;
	}
	else if(a[i]>='A' && a[i]<='Z')
	{
		count++;
	}
	else
	{
		spl++;
	}

}
printf("%d",spl);
	return 0;
}
