#include <stdio.h>

int main()
{
    int a,b,i,sum=1;
    printf("enter tha number:");
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
        sum=sum*a;
        
    }
printf("exponential of:%d",sum);
    return 0;
}
