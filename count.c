#include <stdio.h>
#include <ctype.h>  // for isalpha() function

void count_vowels_and_consonants(char *text, int *vowels_count, int *consonants_count) {
    *vowels_count = 0;
    *consonants_count = 0;

    // Loop through each character in the string
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = tolower(text[i]); // Convert to lowercase to simplify comparison
        
        // Check if character is a letter
        if (isalpha(ch)) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels_count)++;
            } else {
                (*consonants_count)++;
            }
        }
    }
}

int main() {
    char text[100];
    int vowels, consonants;


    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin); // Get input from the user

    // Call function to count vowels and consonants
    count_vowels_and_consonants(text, &vowels, &consonants);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
