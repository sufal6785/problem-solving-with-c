#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 4, 6};
    int c[3];
    int size = 3;
    int common = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < size; j++) {
            if (a[i] == b[j]) {
                c[common] = a[i];
                common++;
                size--;
                for (int k = j; k < size; k++) {
                    b[k] = b[k + 1];
                }
                j--;
            }
        }
    }

    for (int i = 0; i < common; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}