#include <stdio.h>

int main()
{
    // int numberFirst,numberSecond,numberThird;
    // printf("Nhap so thu nhat:");
    // scanf("%d",&numberFirst);
    // printf("Nhap so thu hai:");
    // scanf("%d",&numberSecond);
    // printf("Nhap so thu ba:");
    // scanf("%d",&numberThird);
    // int max = numberFirst;
    // if(max < numberSecond){
    //     max = numberSecond;
    // }
    // if(max < numberThird){
    //     max = numberThird;
    // }
    // printf("Max = %d\n",max);
    // int toan,ly,hoa;
    // printf("Nhap toan:");
    // scanf("%d",&toan);
    // printf("Nhap ly:");
    // scanf("%d",&ly);
    // printf("Nhap hoa:");
    // scanf("%d",&hoa);
    // float diemTB = 1.0 * (toan +ly+ hoa)/3;
    // printf("Diem TB = %f\n",diemTB);
    // if(diemTB >=9 && diemTB <=10 ){
    //     printf("Xuat sac");
    // }else if (diemTB >= 8 && diemTB <9){
    //     printf("Gioi");
    // }else if(diemTB >=6 && diemTB <8){
    //     printf("Kha");
    // }else if(diemTB>=5 && diemTB<6){
    //     printf("TB");
    // }else{
    //     printf("TBY");
    // }
    // int doanhThu;
    // printf("Nhap vao doanh thu:");
    // scanf("%d",&doanhThu);
    // float hoaHong;
    // if(doanhThu >= 0 && doanhThu < 100){
    //     hoaHong = 0.05 * doanhThu;
    // }else if(doanhThu >=100 && doanhThu <300){
    //     hoaHong = 0.1 * doanhThu;
    // }else{
    //     hoaHong = 0.2 * doanhThu;
    // }
    // printf("Hoa hong = %f\n",hoaHong);
    
    // Switch.... case
    // switch(tenBien){
    //     case giaTri:{
    //         // code 
    //         break;
    //     }
    //     // co bn case cung duoc 
    //     default:{
    //         // code
    //         break;
    //     }
    // }
    // Nhap vao thang trong nam Va in ra do thuoc thang nao trong nam 
    int thang;
    printf("Nhap thang:");
    scanf("%d",&thang);
    // if(thang ==1 ){
    //     printf("Thang mot");
    // }else if(thang ==2){
    //     ///
    // }else{
    //     ///
    // }
    switch(thang){
        case 1:{
            printf("Thang mot");
            break;
        }
        case 2:{
            printf("Thang hai");
            break;
        }
        case 3:{
            printf("Thang ba");
            break;
        }
        case 4:{
            printf("Thang bon");
            break;
        }
        // case 12 
        default:{
            printf("Khong co thang nao trong nam");
            break;
        }
    }
    // Nhap vao thang. Va xem do thuoc quy nao trong nam 
    // 1,2,3 => Quy 1 
    // 4,5,6 => Quy 2 
    // 7,8,9 => Quy 3 
    // 10,11,12 => Quy 4 
     int menu;
    printf("Nhap menu:");
    scanf("%d",&menu);
    switch(menu){
        case 1:{
            // tinh tong 
            int soThuNhat;
            printf("Nhap so 1:");
            scanf("%d",&soThuNhat);
            int soThuHai;
            printf("Nhap so 2:");
            scanf("%d",&soThuHai);
            int sum = soThuNhat + soThuHai;
            printf("Sum = %d\n",sum);
            break;
        }
        case 2:{
             int soThuNhat;
            printf("Nhap so 1:");
            scanf("%d",&soThuNhat);
            int soThuHai;
            printf("Nhap so 2:");
            scanf("%d",&soThuHai);
            int sum = soThuNhat * soThuHai;
            printf("Sum = %d\n",sum);
            break;
        }
        case 0:{
            break; // thoat chuong trinh 
        }
        default:{
            printf("Chuc nang khong ton tai");
            break;
        }
    }
    return 0;
}
