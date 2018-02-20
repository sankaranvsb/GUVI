#include <stdio.h>
int main()
{
    int no,sum=0,a;
    scanf("%d",&no);
    for(int i=0;i<no;i++)
    {
    scanf("%d",&a);
    sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}



