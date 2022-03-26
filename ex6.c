#include<stdio.h>
#include<conio.h>
void main() {
    int num[2];
    printf("Enter a number and the exponent of the 2-multiplication:\n");
    scanf("%d%d", &num[0], &num[1]);
    printf("%d",num[0]<<num[1]);
    getch();
}