#include <stdio.h>
int main()
{
    int a;
    int s = 0;
    scanf("give a number", &a);
    if (a < 0)
    {
        printf("not valid");
    }
    else if (a = 0)
    {
        printf(0);
    }
    else
    {
        for (s = 0; s < a; a++)
        {
            s = s + 1;
        }
    }

    printf("the series is: ", s);
}

//this is harry's feature
