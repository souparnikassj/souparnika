#include<stdio.h>
int main()
{
int i,n,r,sum=0;
int temp=n;

scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum=sum+r;

n=n/10;

}
printf("the sumis=%d",sum);

return 0;
}

