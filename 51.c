#include <stdio.h>
int main() 
{
	int a[100],i=0,c=0,n,j;
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
		c++;
	}
	for(j=c-1;j>=0;j--)
	{
	printf("%d\t",a[j]);
	}
	return 0;
}
