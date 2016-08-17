#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,max;
printf("enter frst num:a");
scanf("%d",&a);
printf("enter scnd num:b");
scanf("%d",&b);
max=a;
if(b>max)
{
printf("maximum is b");
}
else if(b<max)
{
printf("maximu is a");
}
else
{
printf("equal");
}
return 0;
}