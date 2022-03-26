#include<stdio.h>
#include<conio.h>
void main() {
    int a;
    double b;
    float c;
    long int d;
    printf("enter the value of a,b,c and d");
    scanf("%d %lf %f %d", &a, &b, &c, &d);
    printf("value of a=%d b=%lf c=%f d=%d", a,b,c,d);
    getch();
} 