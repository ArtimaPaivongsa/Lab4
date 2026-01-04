#include <stdio.h>

int main() {
    int ch;
    int n, i, j;

    scanf("%d %d", &ch, &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", ch);
        }
        printf("\n");
    }

    return 0;
}
