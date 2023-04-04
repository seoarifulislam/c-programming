#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk >= 100)
    {
        printf("Barger khabo");
    }
    else if (tk >= 50)
    {
        printf("Fuska khabo");
    }
    else if (tk >= 20)
    {
        printf("Ice cream khabo");
    }
    else
    {
        printf("taka nay kisu khabo na");
    }

    return 0;
}