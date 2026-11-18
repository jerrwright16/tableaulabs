#include <stdio.h>
#include <stdlib.h>

static int sync_client(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 26) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", sync_client(26, 26));
    return 0;
}
