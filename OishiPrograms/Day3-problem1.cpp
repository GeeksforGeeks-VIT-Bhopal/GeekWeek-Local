#include <iostream>
#include <cstdlib>

void update(int *a,int *b) {
    *a = *a + *b;
    int diff = *a - *b - *b;
    if (diff < 0)
    {
        diff = -1 * diff; 
    }
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
