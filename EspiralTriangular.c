#include <stdio.h>

// Função para calcular as coordenadas com base em n
void calcularCoordenadas(int n, int *x, int *y) {
    int numCiclos = n / 20; // Calcula em qual ciclo estamos
    int resto = n % 20; // Calcula a posição dentro do ciclo

    // Define as coordenadas iniciais
    *x = 0;
    *y = 0;

    // Deslocamento para cada ciclo completo
    *x += numCiclos * 2;
    *y -= numCiclos;

    // Deslocamento dentro do ciclo
    switch (resto) {
        case 0: *x += 0; *y += 0; break;
        case 1: *x += 1; *y += 0; break;
        case 2: *x += 0; *y += 1; break;
        case 3: *x -= 1; *y += 0; break;
        case 4: *x -= 2; *y -= 1; break;
        case 5: *x -= 1; *y -= 1; break;
        case 6: *x += 0; *y -= 1; break;
        case 7: *x += 1; *y -= 1; break;
        case 8: *x += 2; *y -= 1; break;
        case 9: *x += 3; *y -= 1; break;
        case 10: *x += 2; *y += 0; break;
        case 11: *x += 1; *y += 1; break;
        case 12: *x += 0; *y += 2; break;
        case 13: *x -= 1; *y += 1; break;
        case 14: *x -= 2; *y += 0; break;
        case 15: *x -= 3; *y -= 1; break;
        case 16: *x -= 4; *y -= 2; break;
        case 17: *x -= 3; *y -= 2; break;
        case 18: *x -= 2; *y -= 2; break;
        case 19: *x -= 1; *y -= 2; break;
    }
}

int main() {
    int n, i, x, y;
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        calcularCoordenadas(i, &x, &y);

    }
    printf("(%d, %d)", x, y);
    return 0;
}
