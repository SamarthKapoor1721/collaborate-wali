#include <stdio.h>

int main() {
    char character;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is a vowel or consonant
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        // Convert the character to lowercase for easier comparison
        char lowercaseChar = tolower(character);

        // Check if the lowercase character is a vowel
        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
            printf("%c is a vowel.\n", character);
        } else {
            printf("%c is a consonant.\n", character);
        }
    } else {
        printf("Invalid input. Please enter a valid alphabet character.\n");
    }

return 0;
}