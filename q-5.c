#include <stdio.h>

void fibonachi() {
    int a = 0, b = 1, c;

    for (int i = 1; i < 10; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    fibonachi();
    return 0;
}
