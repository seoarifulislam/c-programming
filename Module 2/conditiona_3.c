#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk >= 5000)
    {
        printf("Coxbazar jabo\n");
        if (tk >= 10000)
        {
            printf("Saint Maritn Jabo\n");
        }
        else
        {
            printf("Ferot chole jabo\n");
        }
    }
    else
    {
        printf("Kothaw jabo na\n");
    }

    return 0;
}