/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numberFirst;
    int numberSecond;
    printf("Nhap so thu nhat:");
    scanf("%d",&numberFirst);
    printf("Nhap so thu hai:");
    scanf("%d",&numberSecond);
    // Co 2 cach ep kieu 
    // C1: Ep kieu khong tuong minh <=> Ep kieu ngam : 1.0
    // float thuong = (1.0*numberFirst)/numberSecond;
    // printf("Thuong = %f",thuong);
    // C2: Ep kieu tuong minh
    float thuong = (float)numberFirst/numberSecond;
    printf("Thuong = %f",thuong);
    // Toan tu :4 loai
    // Toan tu so hoc : +,-,*,/,%
    // Toan tu so sanh: ==,>,>=,<=.<
    // Toan tu logic : &&, ||,! 
    // Toan tu gan : =,+=,-=...
    return 0;
}
