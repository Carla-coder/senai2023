#include <stdio.h>

int main() {
    int n, f;

    while (1) {
        scanf("%d %d", &n, &f);

        if (n == 0 && f == 0) {
            break;
        }

        double volume = (double)f * 0.05; // Cada fruta produz 50 ml de suco (0.05 litros)

        printf("%.2lf\n", volume / n);
    }

    return 0;
}

