#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,i;
printf("enter first limit");
scanf("%d",&a);
printf("enter second limit");
scanf("%d",&b);
for(i=a;i<b;i=i+2)
{
printf("%d",i);
}
return 0;
}