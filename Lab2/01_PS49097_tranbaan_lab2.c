#include <stdio.h> 
#include <math.h>
#define PI 3.14


int main()
{
    // #bai1: xay dung chuong trinh tong hieu 
    int x, y, tong, hieu;
        printf("Nhap vao 2 so nguyen x va y:");
        scanf("%d %d", &x, &y);
        tong = x + y;
        hieu = x - y;
        printf("Tong cua 2 so nguyen la: %d\n", tong);
        printf("Hieu cua 2 so nguyen la: %d\n", hieu);
   
// #bai2: xay dung chuong trinh tinh chu vi dien tich hinh chu nhat
    float cdai, crong;
    float chuvi, dientich;
        printf("Nhap chieu dai va chieu rong hinh chu nhat: ");
        scanf("%f %f", &cdai, &crong);
        chuvi=(cdai + crong)*2;
        dientich=cdai*crong;
        printf("Chu vi hinh chu nhat la: %.2f\n", chuvi);
        printf("Dien tich hinh chu nhat la: %.2f\n", dientich);

// #bai3: xay dung chuong trinh chu vi dien tich hinh tron
   double banKinh, chuvi_tron, dientich_tron;
     printf("Nhap vao ban kinh hinh tron:");
     scanf("%lf", &banKinh);
     chuvi_tron = 2 * PI * banKinh;
     dientich_tron = PI * banKinh * banKinh;
     printf("Chu vi hinh tron la: %.2lf\n", chuvi_tron);
    printf("Dien tich hinh tron la: %.2lf\n", dientich_tron);

// #bai4: xay dung chuong trinh tinh diem trung binh
    float toan, ly, hoa, dtb;
     printf("Nhập điểm Toán, Lý, Hóa: ");
     scanf("%f %f %f", &toan, &ly, &hoa);
        dtb = (toan*3 + ly*2 + hoa*1) / 6;
     printf("Diem trung binh la: %.2f\n", dtb);

// #bai5: xay dung chuong trinh tinh chu vi dien tich tam giac vuong
    float canhBA, canhBC, canhAC; 
        printf("Nhap canh 2 goc vuong AB, BC: ");
        scanf("%f %f", &canhBA, &canhBC);
        canhAC= sqrt( canhBA*canhBA + canhBC*canhBC); 
        printf(" \nso do canh huyen: %.2f\n", canhAC );
        chuvi=( canhBA + canhBC + canhAC );
        dientich= (canhBA*canhBC )/2;
        printf("\nChu vi hinh tam giac vuong la: %.2f\n", chuvi);
        printf("Dien tich hinh tam giac vuong la: %.2f\n", dientich);
        return 0;
}