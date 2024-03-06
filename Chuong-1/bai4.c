// 4. Tính diện tích hình chữ nhật

#include <stdio.h>

int main(){
    int chieu_dai, chieu_rong;

    printf("Nhap chieu dai: ");
    scanf("%d", &chieu_dai);

    printf("Nhap chieu rong: ");
    scanf("%d", &chieu_rong);    

    int dien_tich = chieu_dai * chieu_rong;

    printf("Dien tich hinh chu nhat la: %d", dien_tich);
}