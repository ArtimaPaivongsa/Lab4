#include <stdio.h>

int main() {
    char ch;
    int col, row, i, j;

    scanf(" %c %d %d", &ch, &col, &row);

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
