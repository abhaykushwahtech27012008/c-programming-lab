#include <stdio.h>
int main() {
    int n, i = 1;
    long long fact = 1;
    printf("Enter N: ");
    scanf("%d", &n);
    do {
        fact = fact * i;
        i++;
    } while (i <= n);
    printf("Factorial = %lld\n", fact);
    return 0;
}
