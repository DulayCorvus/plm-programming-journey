#include <stdio.h>

int main() {
    //Making a grade calulator. Calculates what grade you'll get in a subject.
    int grade;
    printf("welcome to the Grade Calculator!\n");
    printf("to begin, please input your grade:");
    scanf ("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("invalid grade, try again.");
    }
    
    else {
        
    printf("your numerical grade is: %d\n", grade);
     
    if (grade >= 98) {
        printf("your grade is 1");
    }
    else if (grade >= 95) {
        printf ("your grade is 1.25");
    }
    else if (grade >= 90) {
        printf ("your grade is 1.75");
    }
    else if (grade >= 85 ) {
        printf ("your grade is 2.25");
    }
    else if (grade >= 80) {
        printf ("your grade is 2");
    }
    else if (grade >= 75) {
        printf ("your grade is 3");
    }
    else if (grade < 75 ) {
        printf ("you have failed");
    }
}
    
    return 0;
}
