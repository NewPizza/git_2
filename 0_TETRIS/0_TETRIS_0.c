#include<stdio.h>

void main()
{
     
    
    char a[] = "■";

    for(int i = 0; i < sizeof(a);i++)
    {
        printf("%d\n", sizeof(a));
        printf("%d\n", a[i]);
    }

    

}