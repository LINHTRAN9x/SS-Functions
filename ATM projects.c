#include <stdio.h>

int sodu = 20000000;
void check() {
    printf("So du la %dVND\n", sodu);
}

int tinhruttien(int a) {
    sodu -= a;
    return sodu;
}

int tinhguitien(int a) {
    sodu += a;
    return sodu;
}

int main() {
    char choice, exit = 'N';
    int i, l;
    int sodu_goc=sodu;
    do {
        printf("Xin vui long nhap ma pin (4 so) vao day :");
        scanf("%d", &l);
        if (l == 1234) {
            printf("\na.kiem tra so du");
            printf("\nb.rut tien");
            printf("\nc.Gui tien");
            printf("\nd.Thoat\n");
            scanf(" %c", &choice);

            switch (choice) {
                case 'a': {
                    check();
                    break;
                }
                case 'b': {
                    printf("Nhap so tien muon rut: ");
                    scanf("%d", &i);
                    int ketqua = tinhruttien(i);
                    printf("Ban da chuyen %dVND.So du con %dVND\n", i, ketqua);
                    break;
                }
                case 'c': {
                    int j;
                    printf("nhap so tien ban muon gui: ");
                    scanf("%d", &j);
                    int ketqua = tinhguitien(j);
                    printf("Ban da gui %d.So du dc tang len la %dVND\n", j, ketqua);
                    break;
                }
                case 'd':{
                    exit='N';
                    break;
                }

            }
        } else {
            printf("ban nhap sai mat khau.Vui long thu lai.\n");
        }if (exit!='N'){
        printf("\nQuy khach co muon tro lai khong ?(Y/N) :");
        scanf(" %c", &exit);}
    } while (exit == 'y' || exit == 'Y'||choice!='d');
    return 0;
}
