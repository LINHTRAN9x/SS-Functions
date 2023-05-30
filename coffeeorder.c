#include <stdio.h>
float sum=0;
static int espresso_count=0;
static int cappuccino_count=0;
static int latte_count=0;
float tinhespresso(float a) {

    printf("espresso ordered\n");
    espresso_count++;
    sum+=a;

}

float tinhcappuccino(float b) {

    printf("cappuccino ordered\n");
    cappuccino_count++;
    sum+=b;
}

float tinhlatte(c) {

    printf("latte ordered\n");
    latte_count++;
    sum+=c;
}
ketqua(){
    printf("Order details:\n");
    printf("espresso : %d\n", espresso_count);
    printf("cappuccino : %d\n",cappuccino_count );
    printf("latte : %d\n",latte_count);
    printf("total cost : $%.2f\n", sum);
}

int main() {
    char choice;
    float a=2.50,b=3.00,c=3.50;
    int e;
    do {
        printf("-------MENU------\n");
        printf("a.Espresso: 2.50$\n");
        printf("b.cappuccino: 3.00$\n");
        printf("c.latte: 3.50$\n");
        printf("d.quit\n");
        printf("Lua chon cua ban la : ");
        scanf(" %c", &choice);
        if (choice == 'd') {
            printf("Thoat\n");
            break;
        }
        else {
            switch (choice) {
                case 'a':
                    tinhespresso(a);
                    break;
                case 'b':
                    tinhcappuccino(b);
                    break;
                case 'c':
                    tinhlatte(c);
                    break;
                default:
                    ketqua();
                    break;
            }
        }
    } while (choice!='d');
    ketqua();
    return 0;
}
