#include<stdio.h>
#include<conio.h>
int main(void) {
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if (n%2==0){
        printf("Is even");
    } else {
        printf("Is odd");
    }
    getch();
    return(0);
}