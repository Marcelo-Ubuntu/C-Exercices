#include<stdio.h>
#include<conio.h>
int main(void) {
    int n[4];
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &n[0], &n[1], &n[2]);
    int l = (n[0]>n[1])?(n[0]>n[2])?n[0]:n[2]:(n[1]>n[2])?n[1]:n[2];
    printf("The biggest is %d", l);
    getch();
    return(0);
}