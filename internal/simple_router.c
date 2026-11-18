#include <stdio.h>
#include <stdlib.h>

static int decode_resolver(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 9) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", decode_resolver(9, 9));
    return 0;
}
