#include<stdio.h>
#include<conio.h>
#include<math.h>
int isPrime(int n){
    int c = (int)sqrt(n);
    do{c--;} while (n%(c+1)!=0);
    return (c==0)?1:0;
}
int main(void) {
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    if(isPrime(n)==1){
        printf("%d is prime", n);
    } else {
        printf("%d isn't prime", n);
    }
    getch();
    return(0);
}