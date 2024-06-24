//doc, ghi nhi phan file (copy)
#include <stdio.h>
int main(){
    FILE *in, *out; //khai bao 2 con tro doc file
    char buffer[1024]; //doc 1kb
    size_t bytes; // kich thuoc doc
    in = fopen("inut.bin", "rb"); //mo file nhi phan, che do doc
    if (in == NULL){
        printf("khong co file input.bin\n");
        return 1;
    }
    out = fopen("output.bin", "wb"); //mo file nhi phan, che do ghi
    if(out == NULL){
        printf("khogn co file output.bin\n");
        fclose(in);
        return 1;
    }
    while((bytes = fread(buffer, 1, sizeof(buffer), in)) > 0){ //neu co du lieu -> tiep tuc doc
        fwrite(buffer, 1, bytes, out); //ghi file
    }
    fclose(in); //dog file nguon
    fclose(out); //dong file dich
    printf("copy nhi phan thanh cong");
    return 0;
}
