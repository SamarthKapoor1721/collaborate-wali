#include <stdio.h>

int main() {
    char character;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is an alphabet
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("%c is an alphabet.\n", character);
    } else {
        printf("%c is not an alphabet.\n", character);
    }

    return 0;
}