#include<stdio.h>
int main()
{
   int i,j,n,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
{
 sum=sum+i;
}
printf("sum=%d",sum);

return 0;
}
