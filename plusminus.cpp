#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>


int main(){
    int n,a[100],c=0,d=0,e=0,i;
    float f,g,h;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
       {
        if(a[i]>0)
            {
            c++;
        }
        else if(a[i]<0)
            {
            d++;
        }
            else
                {
                e++;
            }
    }
    
    f=(float)c/n;
    g=(float)d/n;
    h=(float)e/n;
    printf("%f \n",f);
    printf("%f \n",g);
   
    printf("%f \n",h);
    return 0;
}
