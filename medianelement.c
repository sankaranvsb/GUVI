#include <stdio.h>
int main(void) 
{
int a[9],k,j,temp;
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(k=0;i<3;i++)
{
for(j=k+1;j<3;j++)
{
	if(a[k]>a[j])
{
	temp=a[k];
            a[k]=a[j];
            a[j]=temp;
}}}


printf("%d",a[1]);

    return 0;
}
