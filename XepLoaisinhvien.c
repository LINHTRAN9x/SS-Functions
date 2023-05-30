#include <stdio.h>
sapxep(int a){
    if (a >= 90)
        printf("A\n");
    else if (a >= 80)
        printf("B\n");
    else if (a >= 70)
        printf("C\n");
    else if (a >= 60)
        printf("D\n");
    else
        printf("F\n");
        return 0;
}
int main() {
    int i[5];
    int j;
    for (j = 0; j < 5; j++) {
        printf("nhap dien so sinh vien %d: ", j + 1);
        scanf("%d", &i[j]);
        sapxep(i[j]);
    }
}
