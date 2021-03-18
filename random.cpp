#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nanorand(void) {
    struct timespec p[1];
    clock_gettime(CLOCK_MONOTONIC, p);
    return p->tv_nsec % 1000;
}

int main(void) {
    int r, x;
    for (;;) {
        r = nanorand();
        do {
            printf("please type %d (< 50 quits): ", r);
            fflush(stdout);
            if (scanf("%d", &x) != 1) exit(EXIT_FAILURE);
        } while (x != r);
        if (r < 50) break;
    }
    puts("");
    return 0;
}