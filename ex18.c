#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void) {
    int n;
    int c = 4;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("1 || 1 || 2 || ");
    do {
        printf("%d || ", (int)((pow((1+sqrt(5))/2,c))/sqrt(5)-(pow((1-sqrt(5))/2,c))/sqrt(5)) );
        c++;
    } while (c<n);
    printf("%d", (int)((pow((1+sqrt(5))/2,n))/sqrt(5)-(pow((1-sqrt(5))/2,n))/sqrt(5)) );
    getch();
    return(0);
} 