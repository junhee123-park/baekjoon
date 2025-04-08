#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if (b>=45)
        printf("%d %d",a, b-45);
    else if (b<45)
    {
        if (a>=1 && a<=24)
            printf("%d %d",a-1,15+b);
        else if (a==0)
            printf("%d %d",23,15+b);
    }
    return 0;
       
}
