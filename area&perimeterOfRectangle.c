#include <stdio.h>
perimeter(int a,int b){
    int p=(a+b)*2;
    return p;
}
area(int a,int b){
    int s=a*b;
    return s;
}
int main(){
    int i,j;
    printf("enter length and width :  ");
    scanf("%d %d",&i,&j);
    int dientich=area(i,j);
    printf("Area of rectangle is : %d\n",dientich);
    int chuvi= perimeter(i,j);
    printf("Perimeter of rectangle is : %d ",chuvi);
}