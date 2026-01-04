#include <stdio.h>

int main() {
    int ch;
    int n, i;

    scanf(" %d %d", &ch, &n);

    for (i = 0; i < n; i++) {
        printf("%c", ch);
    }

    return 0;
}
