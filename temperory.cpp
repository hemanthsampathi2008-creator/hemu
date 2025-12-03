#include <stdio.h>

int main() {
    int n, temp, sum = 0;

    scanf("%d", &n);

    temp = n;

    // Sum of digits
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    // Digital Root
    int dr = sum;
    while (dr > 9) {
        int s = 0;
        while (dr > 0) {
            s += dr % 10;
            dr /= 10;
        }
        dr = s;
    }

    printf("Digital root = %d\n", dr);

    return 0;
}

