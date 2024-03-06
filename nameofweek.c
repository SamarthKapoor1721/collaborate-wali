#include <stdio.h>

int main() {
    int dayNumber;

    // Get user input for day number
    printf("Enter a day number (1-7): ");
    scanf("%d", &dayNumber);

    // Check if the input is within the valid range
    if (dayNumber >= 1 && dayNumber <= 7) {
        // Array to store day names
        char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

        // Print the day name
        printf("Day of the week: %s\n", days[dayNumber - 1]);
    } else {
        // Invalid input
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}