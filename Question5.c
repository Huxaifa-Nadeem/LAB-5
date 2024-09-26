#include <stdio.h>

int main() {
    float gpa;
    
    // Input: GPA value
    printf("Enter the Grade Point Average (GPA): ");
    scanf("%f", &gpa);

    // Nested ternary operators based on the decision table
    const char* message = (gpa >= 0.0 && gpa <= 0.99) ? "Failed semester—registration suspended" :
                          (gpa >= 1.0 && gpa <= 1.99) ? "On probation for next semester" :
                          (gpa >= 2.0 && gpa <= 2.99) ? "(no message)" :
                          (gpa >= 3.0 && gpa <= 3.49) ? "Dean's list for semester" :
                          (gpa >= 3.5 && gpa <= 4.0) ? "Highest honors for semester" :
                          "Invalid GPA";

    // Output the result
    printf("%s\n", message);

    return 0;
}