#include <stdio.h>

int main() {
    int A, B;
    float time;

    // Taking two space-separated inputs
    scanf("%d %d", &A, &B);

    // Formula: (A * B) / (A + B)
    time = (float)(A * B) / (A + B);

    // Printing the result as integer
    printf("%.0f", time);

    return 0;
}

