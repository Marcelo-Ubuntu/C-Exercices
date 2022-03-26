#include<stdio.h>
#include<conio.h>

int avg(int n, int num[]){
    int sum;
    int i;
    for (i = 0; i < n; i++){
        sum = num[i]+sum;
        }
    float avg = sum/n;
    return avg;
}
void main() {
    int num[3];
    printf("enter the three numbers:\n");
    scanf("%d%d%d", &num[0], &num[1], &num[2]);
    printf("average is %d",avg(3, num));
    getch();
}