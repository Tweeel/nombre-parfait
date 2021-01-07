#include <stdio.h>
#include <stdlib.h>

void est_parfait(int a)
{
    int i, c = 0;
    for (i = a - 1; i > 0; i--)
    {
        if (a % i == 0)
            c = c + i;
    }
    if (a == c)
        printf("%d est un nombre parfait\n ", a);
}

int main()
{
    int a, w = 0, i, c = 0, j;
    // do
    // {
        printf("entrer la valeur de a :");
        scanf("%d", &a);
        est_parfait(a);
    //     printf("\nsi vous voulez reeseyer tapez '1' sinon tapez '0':");
    //     scanf("%d", &w);
    // } while (w);
    // est_parfait(a);
    for (i = 2; i < 1000; i++)
    {
        est_parfait(i);
    }
}
