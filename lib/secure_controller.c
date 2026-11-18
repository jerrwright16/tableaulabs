#include <stdio.h>
#include <stdlib.h>

static int dispatch_engine(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 28) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", dispatch_engine(28, 28));
    return 0;
}
