// 3. Tính tổng, hiệu, tích thương của 2 số nguyên 

#include <stdio.h>

void main(){
    int a,b;
    printf("Input number a: ");
    scanf("%d", &a);
    printf("Input number b: ");
    scanf("%d", &b);
    int tong = a + b;
    int hieu = a - b;
    int tich = a*b;
    float thuong = (float) a/b;
    printf("Tong 2 so a va b: %d\n", tong);
    printf("Hieu 2 so a va b: %d\n", hieu);
    printf("Tich 2 so a va b: %d\n", tich);
    printf("Thuong 2 so a va b: %.2f\n", thuong);
}