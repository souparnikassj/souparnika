#include<stdio.h>
int main()
{
   int i,n,rev=0,r;



scanf("%d",&n);
while(n!=0)
{
   r=n%10;
rev=rev*10+r;
n=n/10;
}
if(rev==n)

  printf("no is palindrome");

else

  printf("no isnt palindrome");

return 0;
}
