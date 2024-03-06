// 5. Tính diện tích hình tròn 

#include <stdio.h>
#define pi 3.14
int main(){
    float duong_kinh;

    printf("Nhap duong kinh: ");
    scanf("%f", &duong_kinh);  

    float dien_tich = pi * duong_kinh*duong_kinh;

    printf("Dien tich hinh chu nhat la: %.2f", dien_tich);    
}