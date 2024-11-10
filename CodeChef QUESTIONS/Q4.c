#include <stdio.h>

int main() {
    int z = 1;
    while (z <= 5) {
        if (z == 3) {
            z++;
        }
        printf("%d ", z);
        z++;
    }
    return 0;
}