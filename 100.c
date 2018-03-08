#include <stdio.h>
int main()
{int no,mult=1,rem;
scanf("%d",&no);
while(no>0)
{
    rem=no%10;
    mult=rem*mult;
    no=no/10;
}
printf("%d",mult);
return 0;
}
