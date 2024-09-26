#include <stdio.h>

int main() {
    float total_calories, fat_grams, calories_from_fat, percentage_from_fat;

    while (1) {
        
        printf("Enter the total number of calories: ");
        scanf("%f", &total_calories);
        
        printf("Enter the number of fat grams: ");
        scanf("%f", &fat_grams);
        
        
        if (total_calories < 0 || fat_grams < 0) {
            printf("Calories and fat grams must not be less than 0. Please try again.\n");
            continue;
        }

        calories_from_fat = fat_grams * 9;

        if (calories_from_fat > total_calories) {
            printf("Error: The calories from fat cannot be greater than the total calories.\n");
            printf("Please check your entries for calories or fat grams.\n");
            continue;
        }

        
        percentage_from_fat = (calories_from_fat / total_calories) * 100;

        
        printf("The percentage of calories that come from fat is: %.2f%%\n", percentage_from_fat);
        break;  
    }

    return 0;
}
