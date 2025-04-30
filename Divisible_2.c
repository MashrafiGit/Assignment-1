#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* get value from user*/
    int N;
    scanf("%d", &N);

    // start loop to check every number and check condition and print
    for (int i = 1; i <= N; i++)
    {

        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
