//truy cap tuan tu
#include <stdio.h>
int main(){
    FILE *file; //con tro file
    char line[256]; //block=1 dong
    file = fopen("input.txt", "r"); //mo file tuan tu
    if(file == NULL){
        printf("khong mo duoc file input.txt\n");
        return 1;
    }
    while(fgets(line, sizeof(file), file)){ //van con du lieu thi van doc
        printf("%s", line); //in ra man hinh
    }
    fclose(file); //dong file
    return 0;
}
