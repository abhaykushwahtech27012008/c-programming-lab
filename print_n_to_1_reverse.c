#include <stdio.h>
int main() {
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    i = n;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");
    return 0;
}
