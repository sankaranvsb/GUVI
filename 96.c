#include <stdio.h>
int main()
{
int no,count=0,i;
printf("enter the no\t");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
    if(no%i==0)
    {
    count++;
    }
}
    if(count>2)
    {
    printf("\ncomposite no");
    }
    else
    {
    printf("\nnot coposite no");
    }
    return 0;
}
