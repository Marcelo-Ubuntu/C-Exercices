#include<stdio.h>
#include<conio.h>
#include<window.h>
//Write a function to demonstrate the command line argument.
void main(int argc, char *argv[]){
    int i;
    for(i=0; i<argc; i++){
        printf("%s\n", argv[i]);
    }
    getch();
}
