#include<stdio.h>
#include<conio.h>
//Write a function to read and print student details using structure and Dynamic memory Allocation. Using malloc().
void StudentDetails(void){
    struct Student{
        char name[20];
        int roll;
        int marks;
    };
    struct Student *ptr;
    int i, n;
    printf("Enter the number of students:\n");
    scanf("%d", &n);
    ptr = (struct Student *)malloc(n*sizeof(struct Student));
    for(i=0; i<n; i++){
        printf("Enter the name:\n");
        scanf("%s", ptr[i].name);
        printf("Enter the roll number:\n");
        scanf("%d", &ptr[i].roll);
        printf("Enter the marks:\n");
        scanf("%d", &ptr[i].marks);
    }
    printf("\n\n\n");
    for(i=0; i<n; i++){
        printf("Name: %s\n", ptr[i].name);
        printf("Roll number: %d\n", ptr[i].roll);
        printf("Marks: %d\n", ptr[i].marks);
    }
    free(ptr);
}