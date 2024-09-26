#include <stdio.h>

int main() {
    char coffee_type;
    int double_size, manual;
    float base_time, total_time;

    
    printf("Welcome to the Coffee Machine!\n");
    printf("Instructions:\n");
    printf("1. Choose coffee type:\n");
    printf("   B - Black Coffee\n");
    printf("   W - White Coffee\n");
    printf("2. Specify if the cup size is double.\n");
    printf("3. Indicate if the coffee is made manually.\n");

    
    printf("Enter coffee type (B for Black, W for White): ");
    scanf(" %c", &coffee_type);

    
    printf("Is the cup size double? (1 for Yes, 0 for No): ");
    scanf("%d", &double_size);

    
    printf("Is the coffee manual? (1 for Yes, 0 for No): ");
    scanf("%d", &manual);

    
    switch (coffee_type) {
        case 'B':
        case 'b':
            base_time = 3.0;  // Black coffee takes 3 minutes
            printf("Preparing your Black coffee...\n");
            break;
        case 'W':
        case 'w':
            base_time = 5.0;  // White coffee takes 5 minutes
            printf("Preparing your White coffee...\n");
            break;
        default:
            printf("Invalid coffee type selected. Exiting.\n");
            return 0;  // Exit if invalid coffee type
    }

   
    if (manual) {
        printf("Manual preparation selected.\n");
    } else {
        printf("Automatic preparation selected.\n");
    }

    
    total_time = (double_size) ? (base_time * 1.5) : base_time;  // Increase time by 50% for double size

    
    if (double_size) {
        printf("Cup size is double. Increasing time by 50%%.\n");
    }

    
    printf("Starting brewing...\n");
    printf("Coffee brewing in progress...\n");
    printf("Finalizing your coffee...\n");

    
    printf("Total time to prepare your coffee: %.2f minutes\n", total_time);

    return 0;
}