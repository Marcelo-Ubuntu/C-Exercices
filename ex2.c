#include<stdio.h>
#include<conio.h>
void main() {
    int taxa;
    int capital;
    int tempo;
    printf("enter the value of capital, time and tax(percent)");
    scanf("%d%d%d", &capital, &tempo, &taxa);
    int patrimonio = (taxa*capital*tempo)/100+capital;
    printf("patrimony will be %d",patrimonio);
    getch();
}