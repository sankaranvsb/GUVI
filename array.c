#include<stdio.h>
void main()
{
int N,K,a[20],i,sum=0;
scanf("%d%d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<K;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
}
