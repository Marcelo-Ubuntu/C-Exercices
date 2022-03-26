#include<stdio.h>
#include<conio.h>
void main() {
    int num[2];
    printf("enter two numbers:\n");
    scanf("%d%d", &num[0], &num[1]);
    /* char str[17];
    // str = (num[0]>num[1])?"Is bigger than":"Is smaller than";
    // printf("First %s Second",str); */
    printf("%d %s %d",num[0], (num[0]>num[1])?"is bigger than":"is equal or smaller than", num[1]);
    getch();
}