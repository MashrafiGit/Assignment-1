#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* get value from user */
    long long int N;
    scanf("%lld", &N);

    // check condition and print
    if (N > 1000)
    {
        printf("I will buy Punjabi\n");

        if (N - 1000 >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}
