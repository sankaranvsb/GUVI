#include <stdio.h>
int main()
{
int i,j,n,a[100];
printf("enter the no\t");
scanf("%d",&n);
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
       if(a[i]>a[j])
        {
           printf("%d",i+1);
           break;
        }
    }
}
return 0;
}
