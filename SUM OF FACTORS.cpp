#include<stdio.h>
int main ()
{
    int n,i=1,r=0,t=0;
    scanf("%d",&n);
    while (i<=n)
{
    r=n%i;
    if (r==0)
    {t=t+i;}
    i++;
}
printf("%d",t-n);
}
