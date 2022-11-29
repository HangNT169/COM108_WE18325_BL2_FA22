/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void bai1(){
    int a, b;
    printf("Nhap vao a: ");
    scanf("%d", &a);
    printf("Nhap vao b: ");
    scanf("%d", &b);
    int Tong = a + b;
    int Hieu = a - b;
    int Tich = a * b;
    float Thuong = (float)a/b;
    printf("%d + %d = %d\n", a, b, Tong);
    printf("%d - %d = %d\n", a, b, Hieu);
    printf("%d * %d = %d\n", a, b, Tich);
    printf("%d / %d = %f\n", a, b, Thuong);
}
void bai2(){
    int n, m, tsl=1;
    printf("Nhap vao n: ");
    scanf("%d", &m);
    for(n=1; n<=m; n++){
        if(n%2!=0){
        tsl*=n;
        }
    }
    printf("Tich so le 1-n la: %d", tsl);
}
int tinhTong(int numberFirst,int numberSecond){
    int tong = numberFirst+numberSecond;
    return tong;
}
int main(){
    // 1. Nhập vào số n. Kiểm tra số này có phải số chia hết cho 5 hay không?.
    // Nếu không thì bắt nhập lại. 
    // 2. Nhâp vào số n. Tính tổng các số chia hết cho 6 từ 0 tới n.
    // 3. Tạo 1 menu lặp đi lặp lại tới khi chọn 0.
    //    1. Nhập vào 2 số tính tổng, hiệu, tích, thương của 2 số đấy 
    //    2. Nhập vào số n. Tính tích các số lẻ từ 1 tới n.
    //    0. Thoát.
    // int n;
    // do{
    //     printf("Nhap vao n: ");
    //     scanf("%d", &n);
    //     if(n%5==0){
    //         printf("%d chia het cho 5", n);
    //     }
    //     n++;
    // }while(n<0);
    
    // int n, a, sum=0;
    // printf("Nhap vao n: ");
    // scanf("%d", &a);
    // for(n=1; n<=a; n++){
    //     if(n%6==0){
    //         sum+=n;
    //     }
    // }
    // printf("Tong = %d", sum);
   
    // int menu;
    // do{
    //     printf("Moi chon menu [0-2]: ");
    //     scanf("%d", &menu);
    //     switch(menu){
    //         case 1:{
    //             bai1();
    //             break;
    //         }
    //         case 2:{
    //             bai2();
    //             break;
    //         }
    //         case 0:{
    //             break;
    //         }
    //         default:{
    //             printf("Chuc nang khong ton tai!\n");
    //             break;
    //         }
    //     }
    // }while(menu!=0);
    int a,b;
    printf("Nhap vao so a");
    scanf("%d",&a);
    printf("Nhap vao so b");
    scanf("%d",&b);
    int tong = tinhTong(a,b);
    printf("Tong = %d\n",tong);
    // Hàm :
    // Có 2 loại:
    // 1. Hàm không có kiểu dữ liệu trả về : void 
    // 2. Hàm có kiểu dữ liệu trả về : int,float, double,...
    // Kiểu dữ liệu trả về : Bắt buộc phải có return 
    // Cú pháp hàm:
    // tênKieuDuLieuHam tênHam(thamSoTruyenVao){
    //     // return..;
    // }
    // VD:
    // float tinhThuong(int a,int b){
    //     float thuong;
    //     // tinh thuong
    //     return thuong;
    // }
    // int main1(){
    //     int tong =0;
    //     return tong;
    // }
    // void lietKe(){
        
    // }
    
    return 0;
}
