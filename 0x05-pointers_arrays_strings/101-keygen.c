#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main() {
    srand(time(NULL));  // Seed the random number generator with current time
    
    char password[PASSWORD_LENGTH + 1]; // +1 for null-terminator
    
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        // Generate a random character in the ASCII range of printable characters
        password[i] = rand() % 94 + 33;  // Range: 33 ('!') to 126 ('~')
    }
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the string
    
    printf("Generated password: %s\n", password);
    
    return 0;
}
