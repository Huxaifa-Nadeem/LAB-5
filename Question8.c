#include <stdio.h>
#include <string.h>

int main() {
    char roll_number[7]; 
    int current_year = 24; 
    int registration_year, years_passed, semester;
    char section;

    printf("Enter roll number (e.g., 22k-6412): ");
    scanf("%6s", roll_number); // Read up to 6 characters

    registration_year = (roll_number[0] - '0') * 10 + (roll_number[1] - '0'); // Convert first two chars to integer
    section = roll_number[5]; // Get the section from the roll number (6th character)

    years_passed = current_year - registration_year;
    semester = (years_passed * 2) + 1; // Assuming each year has two semesters (Fall = 1, Spring = 2)

    section = (section >= '0' && section <= '9') ? section : 'A' + (section - '0');

    
    printf("Registration Year: 20%02d\n", registration_year);
    printf("Current Semester: %d\n", semester);
    printf("Section: %c\n", (section >= '0' && section <= '9') ? ('A' + (section - '0')) : section);

    return 0;
}
