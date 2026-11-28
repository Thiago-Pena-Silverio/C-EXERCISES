#include <stdio.h>

void num(void) {
    for (int value = 1; value <= 100; value++) {
        printf("%d\n", value);
    }
}

int main(void) {
    num();
    return 0;
}
