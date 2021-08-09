#include<stdio.h>

void main(void)
{
     
    
    char a[] = "■a";



    for(int i = 0; i < sizeof(a);i++)
    {
        printf("%d\n", sizeof(a));
        printf("%d\n", a[i]);
    }
    printf("%c%c\n",-30,-106);
    printf("%s\n",a);
    printf("아니 이게 왜이러지?");

}