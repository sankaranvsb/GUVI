#include <stdio.h>
int main()
{   
    int a[100],n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(int i=k-1;i<k;i++)
    {
 printf("%d",a[i]);
    }
    return 0;
}



