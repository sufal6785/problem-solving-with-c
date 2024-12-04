#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 4, 6};
    int c[8];
    int size = 0;

    for (int i = 0; i < 5; i++) {
        c[size++] = a[i];
    }

    for (int i = 0; i < 3; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (b[i] == c[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            c[size++] = b[i];
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}