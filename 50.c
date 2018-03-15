#include <stdio.h>
#include<math.h>
int main()
{int a,b,c=0;
printf("enter the no ");
scanf("%d",&b);
for(int a=1;a<b;a++)
{
if(pow(2,a)==b)
{c=1;
    printf("yes");
}
    }
if(c!=1)
{
    printf("no");
}
    return 0;
}
