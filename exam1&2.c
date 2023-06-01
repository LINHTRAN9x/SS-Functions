#include <stdio.h>
isevennumber(int a) {
    if (a % 2 == 0) {
        return 1;
    } else
        return 0;
}
int main(){
    int n,m,i;
    printf("please enter a number:\n");
    printf("+n : ");
    scanf("%d",&n);
    printf("+m : ");
    scanf("%d",&m);
    printf("the even number betwen 1 and 8:");
    for (i=n;i<=m;i++){
        if (i%2==0){
            isevennumber(i);
            printf("%d",i);
        }else
            printf("\n");
    }
    return 0;
}