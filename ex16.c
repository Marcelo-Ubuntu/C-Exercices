#include<stdio.h>
#include<conio.h>
int main(void) {
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int a = 0;
    int s = 0;
    do {
        s = (a%2==0)?s:s+a;
        a++;
    } while (a<=n);
    printf("The sum of odds between 0 and %d is %d", n, s);
    getch();
    return(0);
}