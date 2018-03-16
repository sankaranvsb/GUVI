#include <stdio.h>
int main()
{  int a[100],i,n,j;
printf("enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
j=n/2;
printf("%d",a[j]);

    return 0;
}
