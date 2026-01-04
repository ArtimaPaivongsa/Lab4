#include <stdio.h>

int main() {
    int n, score, i;
    char grade;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &score);

        if (score >= 80)
            grade = 'A';
        else if (score >= 70)
            grade = 'B';
        else if (score >= 60)
            grade = 'C';
        else if (score >= 50)
            grade = 'D';
        else
            grade = 'F';

        printf("%d(%c)\n", score, grade);
    }

    return 0;
}
