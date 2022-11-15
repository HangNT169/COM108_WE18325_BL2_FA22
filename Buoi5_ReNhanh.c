/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // int chieuDai;
    // int chieuRong;
    // printf("Nhap chieu dai:");
    // scanf("%d",&chieuDai);
    // printf("Nhap chieu rong:");
    // scanf("%d",&chieuRong);
    // int dienTich = chieuDai * chieuRong;
    // int chuVi = (chieuDai + chieuRong)*2;
    // printf("Chu vi = %d\n",chuVi);
    // printf("Dien tich = %d\n",dienTich);
    // int banKinh;
    // printf("Nhap vao ban kinh:");
    // scanf("%d",&banKinh);
    // float chuVi = 2 * banKinh * 3.14;
    // float dienTich = banKinh * banKinh * 3.14;
    // printf("Chu vi = %f\n",chuVi);
    // printf("Dien tich = %f\n",dienTich);
    // int tuoi ;
    // printf("Nhap tuoi:");
    // scanf("%d",&tuoi);
    // printf("Tuoi = %d",tuoi);
    // 1. Cu phap if
    // if(dieuKien){
        // code gi thi code
    // }
    // 2. If... else 
    // if(dieuKien){
    //     // code 
    // }else {
    //     // code
    // }
    //  3. If.... else if .... else if .... else 
    // if(dieuKien){
    //     // code 
    // }else if (dieu kien){
    //     // code 
    // }
    // // co bn else if cung duoc 
    // // ket thuc luon luon la else
    // else{
    //     // code 
    // }
    // VD: Nhap vao 1 so. Kiem tra xem so do co lon hon 5 khong 
    int number ;
    printf("Nhap vao 1 so:");
    scanf("%d",&number);
    if(number > 5){
        printf("Day la so lon hon 5");
    }else if(number <5){
        printf("Day la so be hon 5");
    }else{
        printf("Day la so 5");
    }
    // {
         // co the 1 hoac la nhieu dong code 
    // } : Khoi lenh 
    return 0;
}
