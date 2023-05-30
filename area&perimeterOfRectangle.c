#include <stdio.h>
perimeter(int a,int b){
    int p=(a+b)*2;
    return p;
}
area(int a,int b){
    int s=a*b;
    return s;
}
int main() {
    int i, j, choice;
    do {
        printf("\nEnter length and width :  ");
        scanf("%d %d", &i, &j);

        if (i > 0 && j > 0) {
            printf("||Choice 1 if your want calculator Area of rectangle|| \n");
            printf("||Choice 2 if your want calculator Perimeter of rectangle|| \n");
            scanf("%d",&choice);
            switch (choice) {
                case 1: {
                    int dientich = area(i, j);
                    printf("Area of rectangle is : %d\n", dientich);
                    break;
                }
                case 2: {
                    int chuvi = perimeter(i, j);
                    printf("Perimeter of rectangle is : %d ", chuvi);
                    break;
                }
            }
        } else
            printf("wrong number!!");
    } while (1);
}
