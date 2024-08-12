#include

int main() {
int num1, num2, num3;

printf("Enter three integers: ");
scanf("%d %d %d", &num1, &num2, &num3);

// Nested if-else conditions to determine the order
if (num1 <= num2 && num2 <= num3) {
printf("Ascending order: %d %d %d\n", num1, num2, num3);
} else if (num1 <= num3 && num3 <= num2) {
printf("Ascending order: %d %d %d\n", num1, num3, num2);
} else if (num2 <= num1 && num1 <= num3) {
printf("Ascending order: %d %d %d\n", num2, num1, num3);
} else if (num2 <= num3 && num3 <= num1) {
printf("Ascending order: %d %d %d\n", num2, num3, num1);
} else if (num3 <= num1 && num1 <= num2) {
printf("Ascending order: %d %d %d\n", num3, num1, num2);
} else {
printf("Ascending order: %d %d %d\n", num3, num2, num1);
}

return 0;
}