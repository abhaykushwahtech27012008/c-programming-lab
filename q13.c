#include <stdio.h>

int main() {
    int age;
    float height;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Age: %d, Height: %.2f\n", age, height);
    return 0;
}
