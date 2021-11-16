#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Usage : %s <your name here> <license key here>\n", argv[0]);
        exit(0);
    }
    
    if(strcmp(argv[1], "NomanProdhan") == 0){
        if(strcmp(argv[2], "KS-LICENSE-KEY-2021-REV-2") == 0){
            printf("Congratulations %s, premium service has been activated for you.\n", argv[1]);
            exit(0);
        }else{
            printf("Sorry ! %s , %s is an invalid license.\n", argv[1], argv[2]);
        }
    }else{
        printf("Sorry ! %s , you don\'t have a license.\n", argv[1]);
    }
}