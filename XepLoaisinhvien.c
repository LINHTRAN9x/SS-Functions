#include <stdio.h>

char sapxep(int a) {
    if (a >= 90)
        return 'A';
    else if (a >= 80)
        return 'B';
    else if (a >= 70)
        return 'C';
    else if (a >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int i[100];
    int index[100];
    int j, h, n;
    char choice;

    do {
        printf("Nhap so sinh vien can tra cuu: ");
        scanf("%d", &n);
        for (j = 0; j < n; j++) {
            printf("nhap diem so sinh vien %d: ", j + 1);
            scanf("%d", &i[j]);
            index[j]=i[j];
            getchar();
        }
        for (j=0;j<n-1;j++) {
            for (h = j + 1; h < n; h++) {
                if (i[h] > i[j]) {
                    int temp = i[h];
                    i[h] = i[j];
                    i[j] = temp;

                    int tempindex = index[h];
                    index[h] = index[j];
                    index[j] = tempindex;

                }
            }
        }
        for (j = 0; j < n; j++) {
            char xeploai = sapxep(i[j]);
            printf("sinh vien %d - Diem %d. Xep loai %c\n",index[j],i[j],xeploai);
        }
        printf("return Y/N: ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
