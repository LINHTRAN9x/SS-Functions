#include <stdio.h>

void cong_2so(int a,int b){
    int sum,nhan;
    sum=a+b;
    nhan=a*b;
    printf("\n%d+%d=%d",a,b,sum);
    printf("\n%d*%d=%d",a,b,nhan);
}
int main(){
    int c,d;
    printf("Nhap 2 so de thuc hien cac phep tinh: ");
    scanf("%d %d",&c,&d);
    cong_2so(c,d);

    printf("\nphep tinh them 10,20");
    cong_2so(10,20);
    return 0;
}