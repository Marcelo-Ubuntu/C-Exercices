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
int main(void) {
    int n[6];
    printf("Enter the grades:\n");
    scanf("%d%d%d%d%d", &n[0], &n[1], &n[2], &n[3], &n[4]);
    n[5] = avg(5, n);
    printf("Final grade is %s", (n[5]>=65)?(n[5]>80)?"A+":"A":(n[5]>=50)?"B":(n[5]>=42)?"C":"Fail");
    getch();
    return(0);
}