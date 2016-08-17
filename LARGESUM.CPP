#include <math.h>
#include <stdio.h>
#include <string.h>
3include<limits.h>



int main(){
    int n,i,a[1000];
    long int sum=0;
    
    scanf("%d",&n);    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%lld",sum);
    
    return sum;
}
