#include<stdio.h>
#include<conio.h>
int main(void) {
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("X || 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 || 10\n%d || %d || %d || %d || %d || %d || %d || %d || %d || %d || %d", n, n, n*2, n*3, n*4, n*5, n*6, n*7, n*8, n*9, n*10);
    getch();
    return(0);
}