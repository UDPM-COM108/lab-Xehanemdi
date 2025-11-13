#include <stdio.h>

int main(){
    /*
double diem;
//tinh hoc luc sinh vien
printf("nhap diem tong ket");
scanf("%lf",&diem);
if(diem>=9 ){
    printf("hoc luc xuat sac");
}else if( diem>=8 && diem<9){
    printf("hoc luc gioi");
}else if(diem>=7 && diem<8){
    printf("hoc luc kha");
}else if(diem>=5 && diem<7){
    printf("hoc luc trung binh");
}else if(diem>=3 && diem<5){
    printf("hoc luc yeu vai ca lo`");
}
    */
//chon dap an dung voi swapcasse
char dapAn;
    printf("Viet Nam co bao nhieu dan toc anh em?\n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Xin moi ban chon dap an (a, b, c, d): ");
    scanf(" %c", &dapAn);
switch (dapAn) {
        case 'a':
            printf("Ban da chon sai\n");
            break;
        case 'b':
            printf("Ban da chon sai\n");
            break;
        case 'c':
            printf("Ban da chon dung\n");
            break;
        case 'd':
            printf("Ban da chon sai\n");
            break;
        default:
            printf("Ban chon khong dung bo dap an (a, b, c, d)\n");
    }
    return 0;
}