#include<stdio.h>
#include<conio.h>
int main(void) {
    int y;
    printf("Enter a year:\n");
    scanf("%d", &y);
    if (y%4==0){
        printf("Is Leap");
    } else {
        printf("Isn't Leap");
    }
    getch();
    return(0);
}