#include<stdio.h>
#include<conio.h>
void main(void) {
    int num;
    int val;
    printf("Increment (0) or Decrement(1)?\n");
    scanf("%d", &num);
    printf("Enter a number:\n");
    scanf("%d", &val);
    val = val-1;
    if (num == 0){
        val = val+2;
    }
    printf("%d", val);
    getch();
}