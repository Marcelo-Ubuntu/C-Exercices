#include<stdio.h>
#include<conio.h>
//Write a function in c to create a float array dynamically using calloc().input values and display
void main(void){
    int i;
    float *ptr;
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    ptr = (float *)calloc(n, sizeof(float));
    for(i=0; i<n; i++){
        printf("Enter the value:\n");
        scanf("%f", &ptr[i]);
    }
    printf("\n\n\n");
    for(i=0; i<n; i++){
        printf("%f\n", ptr[i]);
    }
    free(ptr);
}