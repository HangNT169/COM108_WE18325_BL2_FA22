/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // Mang : Vi trí, giá tri 
    // Cach khai bao mang: kieu du lieu tenMang[soPhanTuMaxCuaMang]
    // VD: int a[5];
    // int a[5]={4,5,-1,8,9};
    // Vi trí bắt đầu là 0 
    // Vị trí kết thúc là n-1
    // Giá trị ở vị trí i bất kì  = a[i]
    
    // VD1: Tao 1 mang so nguyen gom 5 phan tu fix cung.
    // In 1 mang so nguyen vua tao.
    // VD2: Nhap 1 mang so nguyen gom n phan tu voi n nhap tu ban phim.
    // In mang so nguyen vua nhap.
    // int a[5]={0,2,-4,6,8};
    
    // for(int i = 0 ;i<5;i++){
    //     printf("%d\n",a[i]);
    // }
    
    int n;
    int a[100];
    printf("Nhap size:");
    scanf("%d",&n);
    
    printf("Nhap cac gia tri trong mang\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("In cac gia tri\n");
     for(int i = 0 ;i<n;i++){
        printf("%d\n",a[i]);
    }
    // B1: Nhap va in cac phan tu trong mang
    // B2: Nhap mang. Tinh tong cac so trong mang
    // B3: Nhap mang.Tinh tong cac so le trong mang 
    // B4: Nhap mang.Tinh tich cac so am trong mang 
    //B5: Nhap mang. Dem xem mang co bn so chan.
    //B2:
    // int n;
    // int sum = 0;
    // int a[100];
    // printf("Nhap size cua mang:");
    // scanf("%d", &n);
    // printf("Nhap vao so phan tu trong mang: ");
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &a[i]);
    // }
    
    // for (int i = 0; i < n; i++) {
    //     sum += a[i];
    // }
    // printf("Tong: %d", sum);

    // B3:
    // int n,a[100];
    // int sum=0;
    // printf("Nhap size:");
    // scanf("%d",&n);
    // printf("Nhap cac gia tri cua mang:");
    // for(int i=0;i<n,i++){
    // scanf("%d",&a[i]);
    // }
    // for(int i=0;i<n;i++){
    // if(a[i]%2==1){
    //   sum+=a[i];
    // }
    // }
    // B4:
    // int a[100];
    // int b ;
    // int tich = 1;
    // printf(" nhap vao size :");
    // scanf("%d,&b");
    // printf(" nhap cac phan tu trong mang ")
    // for (int i =0;i<b;i++){
    //     scanf("%d",&a[i]);
    // }
    // for(int i =0;i<b;i++){
    //     if( a[i]<0){
    //         tich*=a[i];
    //     }
    // }
    // printf(" tich cac so nguyen am la : %d",tich);
    // B5: 
    // int n;
    // int a[100];
    // int dem=0;
    // printf("nhap size:");
    // scanf("%d",&n);
    // printf("nhap gia tri mang:");
    // for(int i = 0;i<n;i++){
    //     scanf("%d",&a[i]);
    // }
    // for(int i =0;i<n;i++){
    //     if(a[i]%2==0){
    //         dem++;
    //     }
    // }
    // printf("dem=%d",dem);
    return 0;
}
