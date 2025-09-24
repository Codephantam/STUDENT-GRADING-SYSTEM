#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Input marks
    printf("Enter the student's marks (0 - 100): ");
    scanf("%d", &marks);

    // Grade calculation
    if (marks<=100 && marks>=90) {
        grade = 'A';
    }
    else if (marks<90 && marks>=80) {
        grade = 'B';
    } 
    else if (marks<80 && marks>=70) {
        grade = 'C';
    } 
    else if (marks<70 && marks>=60) {
        grade = 'D';
    } 
    else if (marks<60 && marks>=50) {
        grade = 'E';
    } 
    else if (marks<50 && marks>=0) {
        grade = 'F';
        
    }
    else {
        grade = 'f';

    }

    // Output result
    printf("Marks: %d\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}


