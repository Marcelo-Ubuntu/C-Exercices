#include<stdio.h>
#include<conio.h>
#include<math.h>

int isPrime(int n){
    int c = (int)sqrt(n);
    do{c--;} while (n%(c+1)!=0);
    return (c==0)?1:0;
}

int sumPrimeNumbers(int n){
    int c = 2;
    int s = 0;
isPrime:
    s=s+c*isPrime(c);
    c++;
    if(c<n){
        goto isPrime;
    }
    goto exit;
exit:
    return s;
}
int main(void) {
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Sum of the primes before %d is %d", n, sumPrimeNumbers(n));
    getch();
    return(0);
}