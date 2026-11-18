#include <stdio.h>
#include <stdlib.h>

static int build_controller(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 62) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", build_controller(62, 62));
    return 0;
}
