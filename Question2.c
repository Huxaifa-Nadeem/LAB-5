#include <stdio.h>
#include <stdbool.h>

bool sleep_in(bool weekday, bool vacation) {
    return !weekday || vacation;
}

int main() {
    
    printf("sleep_in(false, false) → %s\n", sleep_in(false, false) ? "true" : "false"); // Expected: true
    printf("sleep_in(true, false) → %s\n", sleep_in(true, false) ? "true" : "false");   // Expected: false
    printf("sleep_in(false, true) → %s\n", sleep_in(false, true) ? "true" : "false");   // Expected: true

    return 0;
}
