#include

int main() {
int creditHours;

printf("Please enter your total credit hours earned: ");
scanf("%d", &creditHours);

if (creditHours < 0) {
printf("Invalid input.\n");
} else if (creditHours <= 30) {
printf("You are a First-Year Student.\n");
} else if (creditHours <= 60) {
printf("You are a Second-Year Student.\n");
} else if (creditHours <= 90) {
printf("You are a Third-Year Student.\n");
} else {
printf("You are a Fourth-Year Student.\n");
}

return 0;
}