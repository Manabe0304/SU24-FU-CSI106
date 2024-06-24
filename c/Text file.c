//doc, ghi text file (Copy)
#include <stdio.h>
int main(){
    FILE *infile, *outfile; //Khai bao con tro doc, ghi file
    char ch; //khai bao ki tu
    infile = fopen("input.txt", "r"); //Mo 1 file, che do doc
    if (infile == NULL){
        printf("khong co file input.txt \n");
        return 1;
    }
    outfile = fopen("output.txt", "w"); //Mo 1 file, che do ghi
    if (outfile == NULL){
        printf("khong co file output.txt \n");
        fclose(infile); //dong file
        return 1;
    }
    while((ch = fgetc(infile)) != EOF){ //kiem tra neu khong phai cuoi file
        fputc(ch, outfile); //copy tu input.txt sang utput.txt
    }
    fclose(infile); //dong file nguon
    fclose(outfile); //dong file dich
    printf("Sao chep thanh cong\n");
    return 0;
}
