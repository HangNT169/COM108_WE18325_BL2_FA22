/******************************************************************************

Welcome to GDB Online
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // 1. Nhập vào số n. Kiểm tra xem số đó có phải số nguyên dương hay không?.
    // Nếu không phải số nguyên dương thì cho nhập lại. 
    // 2. Nhập vào số n. Tính tích các số lẻ va chia het cho 3. Và in các số từ n tới 0 .
    // 3. Nhập vào số n. Tính tổng các số chia hết cho 5. 
    
    // int number;
    // do{
    //     printf("Nhap mot so: ");
    //     scanf("%d",&number);
    // }while(number<1);
    //printf("Day la so nguyen duong %d",number);
    // int n;
    // int tong = 0;
    // printf("nhap so:");
    // scanf("%d",&n);
    // for(int i =0;i<=n;i++){
    //     if(i%5==0 ){
    //         tong +=i;
    //     }
    // }
    // printf("tong=%d",tong);
    // int n;
    // int tich = 1;
    // printf("Nhap vao n: ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++) {
    //     if (i % 2 != 0 && i % 3 == 0) {
    //         tich *= i;
    //     }
    // }
    // printf("Tich: %d", tich);
    
    // Break: Ngắt vòng lặp 
    // In các số từ 1 tới 10. Nếu gặp 6 thì dừng 
    // for(int i = 1 ;i < 11;i++){
    //     if(i ==6){
    //         break;
    //     }
    //     printf("%d\n",i);
    // }
    // Break: Bat buoc phai su dung trong loop(vong lap)hoac switch..case
    // int i = 5;
    // if(i==5){
    //     break;
    // }
    // => Sai 
    // int number;
    // printf("Nhap thang");
    // scanf("%d",&number);
    // switch(number){
    //     case 1:{
    //         printf("Thang 1");
    //         // break;
    //     }
    //     case 2:{
    //         printf("Thang 2");
    //         break;
    //     }
    //      case 3:{
    //         printf("Thang 3");
    //         break;
    //     }
    //     default:{
    //         printf("Khpong thuoc");
    //         break;
    //     }
    // }
    // continue: bo qua 
    // In cac so tu 1 toi 10 va bo qua 5 
    for(int i = 1;i<11;i++){
        if(i == 5){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
