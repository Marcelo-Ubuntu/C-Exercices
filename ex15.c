#include<stdio.h>
#include<conio.h>

void circle(){
    int n;
    printf("Enter the radius of the circle:\n");
    scanf("%d", &n);
    printf("Area of the circle is %lf", 3.141592653589793*n*n);
}
void retangle(){
    int n[2];
    printf("Enter the height and width of the retangle:\n");
    scanf("%d%d", &n[0], &n[1]);
    printf("Area of the retangle is %d", n[0]*n[1]);
}
void square(){
    int n;
    printf("Enter the side of the square:\n");
    scanf("%d", &n);
    printf("Area of the square is %d", n*n);
}
void triangle(){
    int n[2];
    printf("Enter a height and base of the triangle:\n");
    scanf("%d%d", &n[0], &n[1]);
    printf("Area of the triangle is %d", n[0]*n[1]);
}

int main(void) {
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        circle();
        break;
    case 2:
        retangle();
        break;
    case 3:
        square();
        break;
    case 4:
        triangle();
        break;
    default:
        break;
    }
    getch();
    return(0);
}