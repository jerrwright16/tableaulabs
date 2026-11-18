#include <stdio.h>
#include <stdlib.h>

static int encode_adapter(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 95) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", encode_adapter(95, 95));
    return 0;
}
