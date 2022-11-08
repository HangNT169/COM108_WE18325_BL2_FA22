#include <stdio.h>

int main()
{
    // 1. Cac cach comment 
    // C1: Dung control + / 
    // C2:...
    // printf: dung de in ra man hinh 
    // printf("Ahihi do ngoc\n");
    // printf("test");
    // 2. Kieu du lieu 
    //  Kiểu số nguyên : 1,2,3..... => int %d, long %ld 
    // Kiểu số thực: 1,2; 1,4;.... => float: %f, double: %lf 
    // Kiểu chuỗi ký tự: A, hihi, Nguyen Van A ... => char : %c 
    // Kiểu true, false : bool 
    // Cách khai báo biến : Kiểu dữ liệu tên biến 
    //  Có 2 cách đặt tên biến trong lập trình: 
    // 1. Con lạc đà : numberFirst 
    // 2. Con rắn : number_first 
    // int number = 13;
    // // Cach in gia tri cua 1 bien 
    // printf("Number = %d",number);
    // 3. Nhap xuat du lieu 
    // Nhập: scanf ("%kiểu dữ liêu",&tenBien)
    // Nhap 1 so nguyen tu ban phim. In ra so nguyen vua nhap 
    int number ;
    printf("Nhap so nguyen:");
    scanf("%d",&number);
    printf("Number = %d",number);
    return 0;
}
