#include <stdio.h>

int main() {
    int N, F;
    
    while (1) {
        scanf("%d %d", &N, &F);
        
        if (N == 0 && F == 0)
            break;
        
        double volume = (double)F * 50 / (double)N;
        
        printf("%.2lf\n", volume / 1000); // Convertendo para litros
    }
    
    return 0;
}

