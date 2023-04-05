#include <stdio.h>
int main ()

{
    int tk;
    scanf("%d", &tk);
    if(tk == 10)
    {
        printf("positive");
    }
    else if(tk <0)
    {
        printf("negetive");
    }
    else if(tk == 0)
    {
        printf("zero");
    }
    else
    {
        printf("Jhamela ache");
    }

    return 0;
}