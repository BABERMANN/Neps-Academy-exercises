#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1 = 0;
    int l2 = 0;
    int swi;
    int round;

    scanf("%d", &round);

    for (int i = 0; i < round; i++)
    {

        scanf("%d", &swi);

        if (swi == 1)
        {
            if (l1 == 1)
            {
                l1 = 0;
            }
            else
                l1 = 1;
        }

        if (swi == 2)
        {
            if (l1 == 1)
            {
                l1 = 0;
            }
            else
                l1 = 1;

            if (l2 == 1)
            {
                l2 = 0;
            }
            else
                l2 = 1;
        }
    }
    printf("%d\n", l1);
    printf("%d", l2);
    return 0;
}
