//bai1 nhap diem xep hoc luc
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
int main() {
    float dtb;
    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);
    if (dtb < 0 && dtb > 10) {printf("Diem khong hop le! Vui long nhap tu 0 den 10.\n");}
    else if (dtb >= 9) { 
        printf("Hoc luc: Xuat sac\n");
    }
    else if (dtb >= 8) {
        printf("Hoc luc: Gioi\n");
    }
    else if (dtb >= 6.5) {
        printf("Hoc luc: Kha\n");
    }
    else if (dtb >= 5) {
        printf("Hoc luc: Trung binh\n");
    }
    else { 
        printf("Hoc luc: Yeu\n");
    }

//bai2 giai phuong trinh bac nhat
    float x, a, b;
   printf("Nhap he so A: ");
    scanf("%f", &a);

    printf("Nhap he so B: ");
    scanf("\n%f", &b);

    // Xét các trường hợp
    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh co vo so nghiem.\n");
        else
            printf("Phuong trinh vo nghiem.\n");
    } else {
        x = -b / a;
        printf("Phuong trinh co nghiem duy nhat x = %.2f\n", x);
    }
//bai3 giai phuong trinh bac hai
    float A, B, C;
    float delta, x1, x2;

    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A == 0) {
        if (B == 0) {
            if (C == 0)
                printf("Phuong trinh co vo so nghiem.\n");
            else
                printf("Phuong trinh vo nghiem.\n");
        } else {
            x1 = -C / B;
            printf("Phuong trinh co nghiem x = %.2f\n", x1);
        }
    } else {
        delta = B * B - 4 * A * C;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            x1 = -B / (2 * a);
            printf("Phuong trinh co nghiem kep x = %.2f\n", x1);
        } else {
            x1 = (-B + sqrt(delta)) / (2 * A);
            x2 = (-B - sqrt(delta)) / (2 * A);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
*/
int main(void){
    int luachon;
    printf("Chọn chương trình tính toán:\n");
    printf("1. Tính học lực\n");
    printf("2. Giải phương trình bậc nhất\n");
    printf("3. Giải phương trình bậc hai\n");
    printf("4. Tính tiền điện\n");
    printf("5. Thoát\n");
    printf("Nhập lựa chọn của bạn: ");
    if (scanf("%d", &luachon) != 1) {
        printf("Lua chon khong hop le.\n");
        return 1;
    }

    switch (luachon) {
        case 1: {
            double diem;
            printf ("Nhap diem cua ban:");
            if (scanf ("%lf", &diem) != 1) {
                printf("Gia tri khong hop le.\n");
                return 1;
            }
            if (diem >= 9) {
                printf("Hoc Luc Xuat Sac\n");
            } else if (diem >= 8 && diem < 9) {
                printf("Hoc Luc Gioi\n");
            } else if (diem >= 6.5 && diem < 8) {
                printf("Hoc Luc Kha\n");
            } else if (diem >= 5 && diem < 6.5) {
                printf("Trung binh\n");
            } else {
                printf("Hoc Luc Yeu\n");
            }
            break;
        }
        case 2: {
            double a, b;

            printf("Giai phuong trinh bac nhat ax + b = 0\n");
            printf("Nhap a: ");
            if (scanf("%lf", &a) != 1) {
                printf("Gia tri a khong hop le.\n");
                return 1;
            }

            printf("Nhap b: ");
            if (scanf("%lf", &b) != 1) {
                printf("Gia tri b khong hop le.\n");
                return 1;
            }

            if (a == 0.0) {
                if (b == 0.0) {
                    printf("Phuong trinh co vo so nghiem.\n");
                } else {
                    printf("Phuong trinh vo nghiem.\n");
                }
            } else {
                double x = -b / a;
                printf("Phuong trinh co nghiem duy nhat: x = %.6f\n", x);
            }

            break;
        }
        case 3: {
            double a, b, c;
            printf("Giai phuong trinh bac hai ax^2 + bx + c = 0\n");
            printf("Nhap a: ");
            if (scanf("%lf", &a) != 1) {
                printf("Gia tri a khong hop le.\n");
                return 1;
            }
            printf("Nhap b: ");
            if (scanf("%lf", &b) != 1) {
                printf("Gia tri b khong hop le.\n");
                return 1;
            }
            printf("Nhap c: ");
            if (scanf("%lf", &c) != 1) {
                printf("Gia tri c khong hop le.\n");
                return 1;
            }

            if (a == 0.0) {
                /* Reduce to linear equation bx + c = 0 */
                if (b == 0.0) {
                    if (c == 0.0) {
                        printf("Phuong trinh co vo so nghiem.\n");
                    } else {
                        printf("Phuong trinh vo nghiem.\n");
                    }
} else {
                    double x = -c / b;
                    printf("Phuong trinh bac mot co nghiem: x = %.6f\n", x);
                }
            } else {
                double delta = b * b - 4 * a * c;
                if (delta < 0) {
                    printf("Phuong trinh vo nghiem.\n");
                } else if (delta == 0) {
                    double x = -b / (2 * a);
                    printf("Phuong trinh co nghiem kep: x1 = x2 = %.6f\n", x);
                } else {
                    double x1 = (-b + sqrt(delta)) / (2 * a);
                    double x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("Phuong trinh co hai nghiem phan biet: x1 = %.6f, x2 = %.6f\n", x1, x2);
                }
            }
            break;
        }
        case 4: {
            double soDien, tienDien;
            printf("Nhap so dien tieu thu: ");
            if (scanf("%lf", &soDien) != 1) {
                printf("Gia tri khong hop le.\n");
                return 1;
            }
            if (soDien <= 50) {
                tienDien = soDien * 1000;
            } else {
                tienDien = 50 * 1000 + (soDien - 50) * 1200;
            }
            printf("So tien dien phai tra: %.2f VND\n", tienDien);
            break;
        }
        case 5: {
            printf("Thoat chuong trinh.\n");
            exit(0);
            break;
        }
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
            break;
    }
    return 0;

}