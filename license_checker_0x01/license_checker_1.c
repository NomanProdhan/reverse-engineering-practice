#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Usage : %s <license key here>\n", argv[0]);
        exit(0);
    }

    if(strcmp(argv[1], "KS-LICENSE-KEY-2021-REV-1") == 0){
        printf("Congratulations ! You have successfully registered your premium service.\n");
        exit(0);
    }else{
        printf("%s is not a valid license key.\n", argv[1]);
        exit(0);
    }
}