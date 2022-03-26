#include<stdio.h>
#include<conio.h>
#include<math.h>
int nDigit(int n, int b){
    return (int)(n/pow(10, b))%10;
}
int main(void) {
    int n;
    int c = 0;
    int s = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    do{
        s += nDigit(n, c);
        c++;
    }while(c<=log10(n));
    printf("%d", s);
    getch();
    return(0);
}