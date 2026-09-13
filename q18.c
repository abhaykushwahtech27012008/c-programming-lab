#include <stdio.h>

int main() {
    float salary, bonus;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    bonus = salary * 0.10;
    printf("10%% Bonus: %.2f\n", bonus);
    printf("Total Salary with Bonus: %.2f\n", salary + bonus);
    return 0;
}
