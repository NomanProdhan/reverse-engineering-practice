#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Usage : %s <license pass code here [numbers only]>\n", argv[0]);
        exit(0);
    }

    int license_code = 0;
    char tmp;
    for(int i = 0; i < (int) strlen(argv[1]); i++){
        tmp = argv[1][i];
        license_code += atoi(&tmp);
    }
    if(license_code == 50){
        printf("Premium access has been activated !\n");
        exit(0);
    }else{
        printf("Wrong license code\n");
        exit(0);
   }
}