#include <stdio.h>

float sum = 0;
static int espresso_count = 0;
static int cappuccino_count = 0;
static int latte_count = 0;
float latte=3.50,espresso=2.50,cappuccino=3.00;

float tinhespresso(int quantity) {
    printf("%d espresso ordered\n", quantity);
    espresso_count += quantity;
    sum += (espresso * quantity);
}

float tinhcappuccino(int quantity) {
    printf("%d cappuccino ordered\n", quantity);
    cappuccino_count += quantity;
    sum += (cappuccino * quantity);
}

float tinhlatte(int quantity) {
    printf("%d latte ordered\n", quantity);
    latte_count += quantity;
    sum += (latte * quantity);
}

void ketqua() {
    printf("Order details:\n");
    printf("Espresso: %d\n", espresso_count);
    printf("Cappuccino: %d\n", cappuccino_count);
    printf("Latte: %d\n", latte_count);
    printf("Total cost: $%.2f\n", sum);
}

int main() {
    char choice;
    int quantity;

    do {
        printf("-------MENU------\n");
        printf("a. Espresso: 2.50$\n");
        printf("b. Cappuccino: 3.00$\n");
        printf("c. Latte: 3.50$\n");
        printf("d. Quit\n");
        printf("Your choice: ");
        scanf(" %c", &choice);

        if (choice == 'd') {
            printf("Exiting\n");
            break;
        } else {
            switch (choice) {
                case 'a':
                    printf("Enter the quantity: ");
                    scanf("%d", &quantity);
                    tinhespresso(quantity);
                    break;
                case 'b':
                    printf("Enter the quantity: ");
                    scanf("%d", &quantity);
                    tinhcappuccino(quantity);
                    break;
                case 'c':
                    printf("Enter the quantity: ");
                    scanf("%d", &quantity);
                    tinhlatte(quantity);
                    break;
                default:
                    ketqua();
                    break;
            }
        }
    } while (choice != 'd');
    ketqua();
    return 0;
}
