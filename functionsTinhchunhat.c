#include <stdio.h>
void draw_rec(int s){
    printf("\nHinh chu nhat moi \n");

       for (int i=0;i<s;i++){
           for (int j=0;j<s;j++){
               printf("*");
           }
           printf("\n");
       }

}

int main() {
    char c;
    int size;
    do {
        printf("draw rectangle: ");
        scanf("%d", &size);
        draw_rec(size);

    printf("co muon quay lai Y/N :");
    scanf("%c", &c);
}while (c=='y'||c=='Y');
    return 0;
}