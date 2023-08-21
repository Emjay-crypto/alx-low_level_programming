#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main() {
    time_t t;
    char password[PASSWORD_LENGTH + 1]; /* +1 for null-terminator */
    int i;

    srand((unsigned) time(&t)); /* Seed the random number generator with current time */

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = rand() % 94 + 33; /* Range: 33 ('!') to 126 ('~') */
    }
    password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the string */

    printf("Generated password: %s\n", password);

    return 0;
}
