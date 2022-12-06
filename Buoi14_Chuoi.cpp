/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // 1. Nhập vào 1 mảng. In mảng đấy theo thứ tự ngược lại
    // 2. Nhap vao 1 mang . Tinh tích cac số chẵn chia hết cho 4 
    // 3. Nhập vào 1 mảng. Tìm số lớn nhất trong mảng đó.
    // 4. Nhập vào 1 mảng. Tính tổng các số chẵn ở vị trí lẻ.
    // 5. Nhap vao 1 mang. Tinh tong cac so le chia het cho 5.
    // 6. Nhập vào 1 mảng. Tìm xem mảng có số nguyên dương hay không?
    // int n;
    // int a[100];
    // printf("Nhap size: ");
    // scanf("%d",&n);
    // printf("nhap gia tri\n");
    // for(int i = 0; i<n; i++){
    //     printf("a[%d]=",i);
    //     scanf("%d",&a[i]);
    // }
    // int tong=0;
    // for(int i = 0; i<n; i++){
    //     if(a[i]%2!=0&&a[i]){
    //         tong+=a[i];
    //     }
    // }
    // printf("Tong la: %d", tong);
    
  // Nhập vào 1 mảng. Tìm xem mảng có số nguyên dương hay không?
//     int size;
//     int mang[100];
//     printf("Nhap size:");
//     scanf("%d",&size);
    
//     printf("Nhap cac phan tu trong mang:\n");
//     for(int i = 0 ;i <size;i++){
//         scanf("%d",&mang[i]);
//     }
//     // Danh dau 
//     int flag = 1;
//     // Neu flag = 1 => Mang khong co so nguyen duong 
//     // Flag = 0 => Mang chua so nguyen duong 
//     for(int i = 0;i<size;i++){
//         if(mang[i] > 0){
//             flag = 0;
//         }
//     }
//     if(flag == 1){
//         printf("Khong co so nguyen duong");
//     }else{
//         printf("Mang co so nguyen duong");
//     }
    // Char 
    // char name;
    // printf("Nhap chuoi:");
    // scanf("%c",&name);
    // printf("Name = %c\n",name); // %c: auto nhan 1 ky tu.
    
    // char name1[50];
    // printf("Name :");
    // scanf("%s",name1); // Lay  1 tat la chuoi nhung gap dau space => khong lay nua.
    // // %s => khong co &
    // printf("Name = %s\n",name1);
    
    // char name2[50];
    // printf("Name 2:");
    // // C1: scanf : %[^\n]
    // // scanf("%[^\n]",name2);
    // // C2: Dung Gets 
    // gets(name2);
    // printf("Name 2= %s\n",name2);
    // B1: Nhap ten,diachi,thanhpho, duong cua ban than 
    //  char name[100];
    //  char diachi[50];
    //  char thanhpho[50];
    //  char duong[50];
     
    //  printf(" nhap ten  ");
    //  gets(name);
    //  printf(" dia chi");
    //  gets(diachi);
    //  printf(" thanh pho ");
    //  gets( thanhpho);
    //  printf(" duong ");
    //  gets( duong );
      
    // printf( " name %s \n",name  );
    // printf(" dia chi %s \n",diachi);
    // printf(" thanh pho  %s \n ",thanhpho);
    // printf(" duong %s \n", duong );
    // B2: Nhap ten, tuoi, diachi, namSinh , duong cua ban than.
    // khai bao
    char name[50];
    int tuoi;
    char diaChi[50];
    int namSinh;
    char duong[50];
    // nhap
    printf("Nhap ten:");
    gets(name);
    printf("Nhap tuoi:");
    scanf("%d",&tuoi);
    // xoa bo nho dem 
    fflush(stdin);
    printf("Nhap dia chi:");
    gets(diaChi);
    printf("Nhap nam sinh:");
    scanf("%d",&namSinh);
    fflush(stdin);
    printf("Nhap duong:");
    gets(duong);
    
    // in 
    printf("Ten = %s Tuoi %d Dia Chi %s Nam Sinh %d Duong %s",
    name,tuoi,diaChi,namSinh,duong);
    return 0;
}
