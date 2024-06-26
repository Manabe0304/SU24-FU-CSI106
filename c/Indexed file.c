// Truy cap ngau nhien
#include <stdio.h>
int main(){
    FILE *in;
    char line[256]; //block=1 dong
    int soDong, dongHienTai = 1; //khai bao so dong doc, dong dien tai
    printf("Hay nhap vao so dong can doc: ");
    scanf("%d", &soDong);
    //mo file doc ngau nhien
    in = fopen("input.txt", "r");
    if(in == NULL){ //Kiem tra xem file co ton tai khong
        printf("Khong mo duc file input.txt\n");
        return 1;
    }
    //Tien hanh truy cap ngau nhien
    while(fgets(line, sizeof(line), in)){ //neu co du lieu thi tiep tuc doc
        printf("Dong %d: %s", soDong, line);
        if(dongHienTai==soDong){ //neu la dong cuoi cung
            printf("Dong %d: %s", soDong, line);
            break; //thoat khoi vong lap
        }
        dongHienTai++; //doc tiep cac dong tiep theo
    }
    //in ra man hinh
    if(dongHienTai < soDong){
        printf("Khong co du so dong can thiet\n");
    }
    fclose(in); //dong file
    return 0;
}
