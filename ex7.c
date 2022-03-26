#include<stdio.h>
#include<conio.h>
void main() {
    float num[1];
    printf("Enter the celcius:\n");
    scanf("%f", &num[0]);
    printf("%f",num[0]*1.8+32);
    getch();
}