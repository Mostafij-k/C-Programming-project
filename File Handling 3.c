#include<stdio.h>
void read(char *filename){
    FILE *ftr;
    ftr=fopen(filename,"r");
    if(ftr==NULL){
        printf("Fail to read the file");
        return 0;
    }
    char ch;
while(1){
    if(feof(ftr)){
        break;
    }
    ch=fgetc(ftr);
    printf("%c",ch);
}

    if(fclose(ftr)==EOF){
        printf("Error to close the file ");
    }
    }

int main(){
    read("Art.txt");
return 0;
}
