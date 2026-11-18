#include <stdio.h>
#include <stdlib.h>

static int run_router(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 41) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", run_router(41, 41));
    return 0;
}
