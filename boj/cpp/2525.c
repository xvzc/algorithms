#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    while(1)
    {
        scanf("%d %d",&a,&b);
            if(0<=a && a<=23 && 0<b && b<=59)
                break;
            else
                printf("again\n");
    }
    while(1)
    {
        scanf("%d",&c);
            if(0<=c && c<=1000)
                break;
            else
                printf("again");
    }
    d=(b+c)/60;
    if(b+c<60)
        printf("%d %d",a,b+c);
    else if(b+c>60)
        if(a!=23)
            printf("%d %d",a+d,(b+c)-60*d);
        else
            printf("0 %d",(b+c)-60*d); 
    else
        if(a!=23)
            printf("%d 0",a+d);
        else
            printf("0 %d",(b+c)-60*d); 
    return 0;
}
