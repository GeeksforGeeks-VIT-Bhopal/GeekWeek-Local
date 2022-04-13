#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    unsigned long j;
    srand( (unsigned)time(NULL) );

    for( j = 0; j < 100500; ++j )
    {
        int n;

        /* skip rand() readings that would make n%6 non-uniformly distributed
          (assuming rand() itself is uniformly distributed from 0 to RAND_MAX) */
        while( ( n = rand() ) > RAND_MAX - (RAND_MAX-5)%6 )
        { /* bad value retrieved so get next one */ }

        printf( "%d,\t%d\n", n, n % 6 + 1 );
    }

    return 0;
}
