#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O valor de n deve ser não-negativo.\n");
    } else {
        printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    }
    return 0;
}