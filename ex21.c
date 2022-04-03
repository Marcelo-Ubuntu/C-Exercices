#include<stdio.h>
#include<math.h>
int nDigit(int n, int b){
    return (int)(n/pow(2, b))%2;
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
    return(0);
    getchar();
}